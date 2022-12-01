# 5_setupOpenCV.md

projects/learnCPP/5_setupOpenCV.md

- NOTE: We are building **OpenCV** from source
## Install [**Homebrew**](https://brew.sh) in **Terminal**
1. `% /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
2. Follow directions from **Homebrew** to copy/paste info to your **ZSH** `~/.zprofile`
3. Activate edited file
    1. `% source ~/.zprofile`
4. Update **Homebrew**
    1. `% brew update`
## Install **Python** in **Homebrew**
- NOTE: we need to install **Python** now so when we build **OpenCV** we can setup **Python** bindings in addition to **C++**
1. `% brew install python`
2. Verify **Python** installation
    1. My `% which python3` now outputs the **Homebrew** version's location as `/opt/homebrew/bin/python3`
    2. An additional check is if **Python** open properly
        1. `% python3`
        2. `>>> quit ()` to quit at the **Python** command prompt
## Install additional programs in **Homebrew**
1. `% brew install cmake doxygen`
    1. If **Homebrew** says to run something to install a program's "docs" or "man pages" I *highly* suggest you do so, for example, `% brew install cmake-docs`
2. `% brew install jpeg libtiff libpng openexr`
    1. If **Homebrew** says something "is already installed and up-to-date" don't worry about reinstalling
3. `% brew install eigen tbb`
4. `% brew install gphoto2`
    - NOTE: must link [**gPhoto2**](http://www.gphoto.org) to **OpenCV** when building via **CMake**
5. `% brew install qt5 pkg-config`
6. Add **Homebrew**'s **pkg-config** directory to our `~/.zprofile`
    1. `% brew install pkg-config`
    2. `% export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/opt/homebrew/lib`
7. `% brew install zlib`
    - NOTE: **Homebrew** instructed me to export flags for the compiler
        1. `% export LDFLAGS="-L/opt/homebrew/opt/zlib/lib"`
        2. `% export CPPFLAGS="-I/opt/homebrew/opt/zlib/include"`
        3. Activate edited file
            1. `% source ~/.zprofile`


## Update **pip3**
- NOTE: Update `pip3` via a call inside of `python3` as directed by **PIP** in the past when upgrading itself
1. `% python3 -m pip install --upgrade pip`
## Install virtual environment packages for **Python**
1. `% sudo -H pip3 install virtualenv virtualenvwrapper`
## Setup "cv" **Python** virtual environment
1. Add virtual environment to **ZSH** profile
    1. `% nano ~/.zprofile` to open our profile in the **Nano** text editor
    2. Add the following lines to the end
    ```c++
    # virtualenv and virtualenvwrapper
    export WORKON_HOME=$HOME/.virtualenvs
    export VIRTUALENVWRAPPER_PYTHON=/opt/homebrew/bin/python3
    source /opt/homebrew/bin/virtualenvwrapper.sh
    ```
    3. Activate the newly updated profile
        1. `% source ~/.zprofile` which results in the creation of new files in /Users/<your_username>/.virtualenvs/
    3. Save and quit **nano** by following directions, in-app
2. Make new **Python** virtual environment using our `python3` named `cv` for "computer vision"
    1. `% mkvirtualenv cv -p python3
    1. Start working on `cv` virtual environment
        1. `% workon cv`
    2. Install **numpy** for **Python**
        - NOTE: we linked `python3` as our `python` in the virtual environment, which means we simply call `python` and `pip`, dropping the `3` suffix
        1. `% pip install numpy`
## Clone **OpenCV** and "contrib" files from **GitHub**
1. `% cd ~/`
2. `% git clone https://github.com/opencv/opencv`
    - NOTE: repository size is larger than most at ~500 mB
3. `% git clone https://github.com/opencv/opencv_contrib.git`

## Build **OpenCV** using **CMake**
1. `% mkdir build`
2. `% cd build`
3. `% workon cv`
    - NOTE: our **Python** virtual environment should still be active from above, but in case you've closed your **Terminal**--like I did when I took a break between these steps--you need to activate it again
4. Run `cmake` using personal **C++** flags plus **Python** flags from a paywalled [**pyimagesearch gurus**](https://pyimagesearch.com/pyimagesearch-gurus/) page
    ```zsh
    % cmake -D CMAKE_BUILD_TYPE=RELEASE \
        -D OPENCV_GENERATE_PKGCONFIG=ON \
        -D CMAKE_INSTALL_PREFIX=/usr/local \
        -D OPENCV_EXTRA_MODULES_PATH=~/opencv_contrib/modules \
        -D PYTHON3_LIBRARY=`python -c 'import subprocess ; import sys ; s = subprocess.check_output("python3-config --configdir", shell=True).decode("utf-8").strip() ; (M, m) = sys.version_info[:2] ; print("{}/libpython{}.{}.dylib".format(s, M, m))'` \
        -D PYTHON3_INCLUDE_DIR=`python -c 'import distutils.sysconfig as s; print(s.get_python_inc())'` \
        -D PYTHON3_EXECUTABLE=$VIRTUAL_ENV/bin/python \
        -D BUILD_opencv_python2=OFF \
        -D BUILD_opencv_python3=ON \
        -D INSTALL_PYTHON_EXAMPLES=ON \
        -D INSTALL_C_EXAMPLES=ON \
        -D OPENCV_ENABLE_NONFREE=ON \
        -D WITH_GPHOTO2=ON \
        -D WITH_QT=ON \
        -D Qt5_DIR=$(brew --prefix qt5)/lib/cmake/Qt5 \
        -D BUILD_ZLIB=OFF \
        -D BUILD_EXAMPLES=ON \
        ..
    ```
5. Build **openCV** from source
    1. `% make -j8`
    - NOTE: `-j8` uses 8 cores, set appropriately for your machine
    - NOTE: if you receive an error, be sure to run `% make clean` before trying to build again
    - NOTE: if you receive an error, first run `% make clean` before trying to build again, then try again with `% make` or `% make VERBOSE=1`
## Install **OpenCV**
1. `% sudo make install`
## Link **OpenCV** to **C++**
1. Copy `opencv4.pc` to `opencv.pc`
    1.  `% sudo cp /usr/local/lib/pkgconfig/opencv4.pc /usr/local/lib/pkgconfig/opencv.pc`
1. Add location for `pkg-config` to access `opencv.pc`
    1. `% export PKG_CONFIG_PATH=$PKG_CONFIG_PATH:/usr/local/lib/pkgconfig/opencv.pc`
2. Activate the newly updated profile
    1. `% source ~/.zprofile`
3. Verify access to **OpenCV** by printing its version
    1. `% pkg-config --modversion opencv`
## Link **OpenCV** to `cv` virtual environment **Python**
1. Rename **Python** bindings to something simpler
    1. `% sudo mv /usr/local/lib/python3.10/site-packages/cv2/python-3.10/cv2.cpython-310-darwin.so /usr/local/lib/python3.10/site-packages/cv2/python-3.10/cv2.so`
2. Sym-link these **OpenCV** bindings into our `cv` virtual environment
    1. `% ln /usr/local/lib/python3.10/site-packages/cv2/python-3.10/cv2.so ~/.virtualenvs/cv/lib/python3.10/site-packages/cv2.so`
3. Verify **OpenCV** is available via **Python** by printing its version
    1. `% python`
    2. `>>> import cv2`
    3. `>>> cv2.__version__`

 ## Tell **VS Code** where to look for our **openCV** headers
1. In **VS Code** in the **.vscode** directory
    1. Open **c_cpp_properties.json**
        1. Add `/usr/local/include/opencv4/**` to the end of `"includePath"` options
        2. Save and close file
    2. Open **tasks.json**
        1. Under `"args"` after `"-stdlib=libc++",`, add 5 options:
            1. `"-I/usr/local/include/opencv4",`
            2. `"-lopencv_core",`
            3. `"-lopencv_imgcodecs",`
            4. `"-lopencv_highgui",`
            5. `"-L/usr/local/lib",`
        2. Save and close file
    1. Keyboard shortcut: "Cmd+Shift+P"
    2. Search for "C/C++: Edit configurations"
2. Scroll down to Include Path section
3. Add "/usr/local/include/opencv4/**"
4. Save and close