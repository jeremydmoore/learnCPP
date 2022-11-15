# 4_addUsing2Files.md

projects/learnCPP/4_addUsing2Files.md

## Make a directory and source code file for this project in **Terminal**
1. `% mkdir ~/projects/learnCPP/4_addUsing2Files`
2. `% touch ~/projects/learnCPP/4_addUsing2Files/4_addUsing2Files.cpp`

## Begin coding in **VS Code**
1. Open **VS Code** in learnCPP working directory, if not already open
    1. `% code ~/projects/learnCPP/`
2. Double-click **4_addUsing2Files.cpp** in **VS Code**'s *Explorer* tab to open the file

## Add boilerplate to **4_addUsing2Files.cpp**
```c++
/* 
    projects/learnCPP/4_addUsing2Files.cpp

    Expected behavior:
    1. Get 2 integers from console user input
    2. Print sum of 2 integers to console
    
    Requirements:
    1. Separate user input logic to a separate file

    Jeremy@MooreCreativeArts.com
*/
```

## Write code
- Mid-process notes:
    1. **clang++** isn't compiling all of the files
        1. Can use a forward declaration that declares a function's name, any inputs, and any outputs so that it can be called in `main()` without error
            1. <u>Declaration</u>: associates the variable with a type
            2. <u>Definition</u>: associates the variable with a type AND allocates memory
            3. To use forward declarations **.vscode/tasks.json** so we compile all `*.cpp` files in the project directory, and I'll assume recursively
                1. Change line 12's `"${file}",` to `"${fileDirname}/**.cpp",`
        2. BUT [**Google**'s **C++** style guide](https://google.github.io/styleguide/cppguide.html#Forward_Declarations) says to avoid forward declarations where possible and instead include the headers themselves
            1. Pros of forward declarations are save on compile time and unnessary recompilation
            2. Cons include a number of depedency and undefined behavior headaches
        3. To follow **Google**, use a `*.cpp` file for the one that includes our `main()` and `*.h` headers for code that needs to be in separate files
            ```c++
            #include <iostream>
            #include "4-1_userInput.h"
            ```
    

## Build **4_addUsing2Files** executable
1. In **VS Code** on **4_addUsing2Files.cpp**, click the *Play* button to build the project
2. If there are build errors or warnings, then debug as necessary until it builds cleanly

## Run **4_addUsing2Files** executable
1. Open a new **Terminal** in **VS Code** if needed, keyboard shortcut ``Ctrl+Shift+` ``
2. Run executable
    1. `% ./4_addUsing2Files/4_addUsing2Files`
3. If executable is not performing as expected, debug as necessary until it does

## Post project review
1. It hadn't clicked yet that I was writing source code that would all be compiled into a single executable
    1. I have created executables on Windows before, but hadn't compiled an all-in-one desktop app for macOS before
2. There's something powerful about creating a single file that can be shared and ran on the desktop without setting up a development environement
    1. Is the only requirement to run this on Windows using a Windows build environment?
        1. Good question, but waaay out of scope for this macOS project