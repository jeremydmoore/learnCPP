# 3_add2Integers.md

projects/learnCPP/3_add2Integers.md

## Make a directory and source code file for this project in **Terminal**
1. `% mkdir ~/projects/learnCPP/3_add2Integers`
2. `% touch ~/projects/learnCPP/3_add2Integers/3_add2Integers.cpp`

## Begin coding in **VS Code**
1. Open **VS Code** in learnCPP working directory, if not already open
    1. `% code ~/projects/learnCPP/`
2. Double-click **3_add2Integers.cpp** in **VS Code**'s *Explorer* tab to open the file

## Add boilerplate
```c++
/* 
    projects/learnCPP/3_add2Integers.cpp

    Expected behavior:
    1. Get 2 integers from console user input
    2. Print sum of 2 integers to console

    Jeremy@MooreCreativeArts.com
*/
```

## Write code

## Build **3_add2Integers** executable
1. In **VS Code** on **3_add2Integers.cpp**, click the *Play* button to build the project
2. If there are build errors or warnings, then debug necessary until it builds cleanly

## Run **3_add2Integers** executable
1. Open a new **Terminal** in **VS Code** if needed, keyboard shortcut ``Ctrl+Shift+` ``
2. Run executable
    1. `% ./3_add2Integers/3_add2Integers`
3. If executable is not performing as expected, debug as necessary until it does

## Post project review
1. Things are starting to syntactically click with **C++**
    1. Be wary of thinking Pythonically
        1. Think more rigidly with stricter organization
    2. Do programming languages have false cognates?
        - I know dir is used differently in **Python** versus the **Microsoft** console window so I do need to be clear how **C++** is using each term
2. **clang++** is a compiler and **CMAKE** is a build system generator
    1. Build system generators define how to compile your code, but are not necessary
    2. **CMAKE** is probably more powerful than I need right now and adds a layer of complexity over simply using **clang++**