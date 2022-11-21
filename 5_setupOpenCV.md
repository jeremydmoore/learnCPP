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


## Update **pip3**
- NOTE: Update `pip3` via a call inside of `python3` as directed by **PIP** in the past when upgrading itself
1. `% python3 -m pip install --upgrade pip`
## Install virtual environment packages for **Python**
1. `% sudo -H pip3 install virtualenv virtualenvwrapper
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

##**CMake** **OpenCV**
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
        -D PYTHON3_LIBRARY=`python -c 'import subprocess ; import sys ; s = subprocess.check_output("python-config --configdir", shell=True).decode("utf-8").strip() ; (M, m) = sys.version_info[:2] ; print("{}/libpython{}.{}.dylib".format(s, M, m))'` \
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
        -D BUILD_EXAMPLES=ON ..
    ```