# 3_add2Integers.md

projects/learnCPP/3_add2Integers.md

## 1. Make a directory and source code file for this project in **Terminal**
1. `% mkdir ~/projects/learnCPP/3_add2Integers`
2. `% touch ~/projects/learnCPP/3_add2Integers/3_add2Integers.cpp`

## 2. Begin coding in **VS Code**
3. Open **VS Code** in learnCPP working directory, if not already open
    1. `% code ~/projects/learnCPP/`
4. Double-click **3_add2Integers.cpp** in **VS Code**'s *Explorer* tab to open the file

## 3. Add boilerplate
```c++
/* 
    projects/learnCPP/3_add2Integers.cpp

    Expected behavior:
    1. Get 2 integers from console user input
    2. Print sum of 2 integers to console

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

    return num;
}

int sumOf2Numbers(int x, int y)
{
    // code here

    return sum;
}
```

## 6. Add int main()
```c++
int main()
{
    int x << getNumFromUserInput();
    int y << getNumFromUserInput();

    int sum << sum2Numbers(x, y);

    // print sum

    return 0;
}
```

## 7. Build **3_add2Integers** executable
1. In **VS Code** on **3_add2Integers.cpp**, click the *Play* button to build the project
2. If there are build errors or warnings, then debug necessary until it builds without them

## 8. Run **3_add2Integers** executable
1. Open a new **Terminal** in **VS Code** if needed, keyboard shortcut ``Ctrl+Shift+` ``
2. Run executable
    1. `% ./3_add2Integers/3_add2Integers`
3. If executable is not performing as expected, debug as necessary until it does

## 8. Continue to project #_name