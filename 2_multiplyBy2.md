# 2_multiplyBy2.md

projects/learnCPP/2_multiplyBy2.md

## 1. Make a directory and source code file for this project in **Terminal**
1. `% mkdir ~/projects/learnCPP/2_multiplyBy2`
2. `% touch ~/projects/learnCPP/2_multiplyBy2/2_multiplyBy2.cpp`

## 2. Begin coding in **VS Code**
3. Open **VS Code** in learnCPP working directory, if not already open
    1. `% code ~/projects/learnCPP/`
4. Double-click **2_multiplyBy2.cpp** in **VS Code**'s *Explorer* tab to open the file

## 3. Add boilerplate
```c++
/* 
    projects/learnCPP/2_multiplyBy2.cpp

    Expected behavior:
    1. Get integer from console user input
    2. Print integer multiplied by 2 to console

    Jeremy@MooreCreativeArts.com
*/
```

## 4. Add includes
```c++
#include <iostream>  // for user input and printing
```

## 5. Add functions
```c++
int getNumFromUserInput()
{
    // code here
    return num
}

void printMultipliedBy2(num)
{
    // code here
}
```

## 5. Add int main()
```
int main()
{
    int num { getNumFromUserInput() };

    printMultipliedBy2(num);

    return 0
}
```

## 7. Build **2_multiplyBy2** executable
1. In **VS Code** on **2_multiplyBy2.cpp**, click the *Play* button to build the project
2. If there are build errors or warnings, then debug necessary until it builds without them

## 8. Run **2_multiplyBy2** executable
1. Open a new **Terminal** in **VS Code** if needed, keyboard shortcut ``Ctrl+Shift+` ``
2. Run executable
    1. `% ./2_multiplyBy2/2_multiplyBy2`
3. If executable is not performing as expected, debug as necessary until it does

## 9. Continue to project 3_add2Integers