# 5_setupOpenCV.md

projects/learnCPP/5_setupOpenCV.md

## Make a directory and source code file for this project in **Terminal**
1. `% mkdir ~/projects/learnCPP/5_setupOpenCV`
2. `% touch ~/projects/learnCPP/5_setupOpenCV/5_setupOpenCV.cpp`

## Begin coding in **VS Code**
3. Open **VS Code** in learnCPP working directory, if not already open
    1. `% code ~/projects/learnCPP/`
4. Double-click **5_setupOpenCV.cpp** in **VS Code**'s *Explorer* tab to open the file

## Add boilerplate to **5_setupOpenCV.cpp**
```c++
/* 
    projects/learnCPP/5_setupOpenCV.cpp

    Expected behavior:
    1. Create an image
    2. Display image

    Jeremy@MooreCreativeArts.com
*/
```

## Write code
- In-process notes:
    1. Install: [**OpenCV**](https://docs.opencv.org/4.x/d0/db2/tutorial_macos_install.html) for **macOS**
        1. Install **OpenCV** using **HomeBrew**
            - Could be built from source for the most cutting-edge version, but I want a stable version while I'm still learning
            1.  Install [**HomeBrew**](https://brew.sh) for **macOS** in **Terminal**
                1. `% /bin/bash -c "$(curl -fsSL https://raw.githubusercontent.com/Homebrew/install/HEAD/install.sh)"`
                2. Finish setting up **Homebrew** following their instructions (THESE ARE UNIQUE TO EACH USER)
                    1. `echo '# Set PATH, MANPATH, etc., for Homebrew.' >> /Users/jeremymoore/.zprofile`
                    2.  `echo 'eval "$(/opt/homebrew/bin/brew shellenv)"' >> /Users/jeremymoore/.zprofile`
                    3. `eval "$(/opt/homebrew/bin/brew shellenv)"`
                3. Update **Homebrew** which is also a test to make sure it's installed
                    1. `brew update`
            2. `brew install opencv`


                


## Build **5_setupOpenCV** executable
1. In **VS Code** on **5_setupOpenCV.cpp**, click the *Play* button to build the project
2. If there are build errors or warnings, then debug as necessary until it builds without them

## Run **5_setupOpenCV** executable
1. Open a new **Terminal** in **VS Code** if needed, keyboard shortcut ``Ctrl+Shift+` ``
2. Run executable
    1. `% ./5_setupOpenCV/5_setupOpenCV`
3. If executable is not performing as expected, debug as necessary until it does

## Post project review
1. **OpenCV** is a large library and can take a while to download and install via **HomeBrew**
    1. Like "go make & enjoy a coffee" long
 