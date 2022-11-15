# 1_helloWorld.md

projects/learnCPP/1_helloWorld.md

## Make a directory and source code file for this project in **Terminal**
1. `% mkdir ~/projects/learnCPP/1_helloWorld`
2. `% touch ~/projects/learnCPP/1_helloWorld/1_helloWorld.cpp`

## Begin coding in **VS Code**
1. Open **VS Code** in learnCPP working directory, if not already open
    1. `% code ~/projects/learnCPP/`
2. Double-click **2_multiplyBy2.cpp** in **VS Code**'s *Explorer* tab to open the file

## Add boilerplate
```c++
/* 
    projects/learnCPP/1_helloWorld.cpp

    Expected behavior:
    1. Print "Hello world!" to the console

    Jeremy@MooreCreativeArts.com
*/
```

## Write code

## Build **1_helloWorld** executable
1. In **VS Code** on **1_helloWorld.cpp**, click the *Play* button to build the project
2. In the drop-down list of detected compilers, choose *C/C++: clang++ build and debug active file* from **/usr/bin/clang++**

## Edit **tasks.json**
1. After clicking *Play* for the first time on a ***.cpp** file **VS Code** will create a **.vscode** directory in **projects/LearnCPP**
2. Double-click **.vscode/tasks.json** in **VS Code**'s *Explorer* tab to open the file
    1. On line 10, under `"args":` delete `"-g",`
    2. Still on line 10, add `"-std=c++20",` then hit enter
    3. On the new line 11 add `"-stdlib=libc++",`
    4. `"args":` should look like below
```c++
            "args": [
                "-fcolor-diagnostics",
                "-fansi-escape-codes",
                "-std=c++20",
                "-stdlib=libc++",
                "${file}",
                "-o",
                "${fileDirname}/${fileBasenameNoExtension}"
            ],
```
## Build **1_helloWorld** executable . . . again
1. In **VS Code** on **1_helloWorld.cpp**, click the *Play* button to build the project
2. If there are build errors or warnings, then debug as necessary until it builds cleanly

## Run **1_helloWorld** executable
1. Open a new **Terminal** in **VS Code** if needed, keyboard shortcut ``Ctrl+Shift+` ``
2. Run executable
    1. `% ./1_helloWorld/1_helloworld`
3. If executable is not performing as expected, debug as necessary until it does

## Post project review
1. Needing to edit **tasks.json**
    1. Didn't expect it would require removing AND adding `args` to make it work without creating any extra files