# 0_setup.md

~/projects/learnCPP/0_setup.md

## Install **Visual Studio Code** and extensions
1. Install [**Visual Studio Code**](https://code.visualstudio.com) (**VS Code**)
2. Install [**C++**](https://marketplace.visualstudio.com/items?itemName=ms-vscode.cpptools) extension
   - additional required extensions will be auto-installed
3. Install [**vscode-icons**](https://marketplace.visualstudio.com/items?itemName=vscode-icons-team.vscode-icons) extension
   - Visual icons for the file explorer that help me navigate more quickly
   1. *Set File Icon Theme* to **VSCode Icons**
4. Install [**GitLens**](https://marketplace.visualstudio.com/items?itemName=eamodio.gitlens) extension
   - Used to interact with my [**learnCPP GitHub repository**](https://github.com/jeremydmoore/learnCPP) for all of these C++ projects
   - All further installation and use of GitHub is out of scope and won't be included beyond this step

## Make sure **clang++** is installed
1. Open **Terminal**
2. `% clang++ --version`
3. If **clang++** isn't installed, install **Apple**'s command line developer tools
   1. `% xcode-select --install`
   2. `% clang++ --version`

## Make a nested directory for C++ projects
1. `% mkdir -p ~/projects/learnCPP`

## Post project review
1. Switched from **Xcode** to **VS Code**
   1. I'm much more familiar with **VS Code**
   2. **Microsoft**'s documentation is much better than **Apple**'s
   3. There are more resources available for **VS Code** online than **Xcode**
   4. I'm not sure where I'll end up and **VS CODE** is the more portable IDE to write in 

## Continue to 1_helloWorld.md