# 5_setupPythonAndOpenCV.md

projects/learnCPP/5_setupOpenCV.md

1. Install [**Homebrew**](https://brew.sh) in **Terminal**
    1. `% /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
    2. Follow directions from **Homebrew** to copy/paste info to your **ZSH** profile
    3. Update **Homebrew**
        1. `% brew update`
2. Install **Python** in **Homebrew**
    - NOTE: we need to install **Python** now so when we build **OpenCV** we can setup **Python** bindings in addition to **C++**
    1. `% brew install python`
    2. Verify **Python** installation
        1. My `% which python3` now outputs the **Homebrew** version's location as `/opt/homebrew/bin/python3`
        2. An additional check is that `% python3` properly opens **Python**
            - `>>> quit()` to quit at the **Python** command prompt
3. Install additional programs in **Homebrew**
    1. `% brew install cmake wget`
        1. If **Homebrew** says to run something to install a program's "docs" or "man pages" I *highly* suggest you do so, for example, `% brew install cmake-docs`
    2. `% brew install jpeg libtiff libpng openexr`
        1. If **Homebrew** says something "is already installed and up-to-date" don't worry about reinstalling
    3. `% brew install eigen tbb`
4. Update **pip3**
    - NOTE: Update `pip3` via a call inside of `python3` as directed by **PIP** in the past
    1. `% python3 -m pip install --upgrade pip`
4. Install virtual environment packages for **Python**
    1. `% sudo -H pip3 install virtualenv virtualenvwrapper
5. Setup "cv" **Python** virtual environment
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



