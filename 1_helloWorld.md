# 1_helloWorld.md

projects/c++/1_helloWorld.md

## 1. Make a directory and source code file for this project in Terminal, then open them in **VS Code**
1. `% mkdir ~/projects/learnCPP/1_helloWorld`
2. `% touch ~/projects/learnCPP/1_helloWorld/1_helloWorld.cpp`
3. `% code ~/projects/learnCPP/`
4. Double-click **1_helloWorld.cpp** file in **VS Code**'s *Explorer* tab

## 3. Add boilerplate and includes
```c++
/* 
// 1_helloWorld.cpp
// projects/learnCPP/1_helloWorld.cpp
// Prints "Hello world!" to the console
*/

# include <iostream>
```

## 4. Add int main()
```c++
int main()
{
    cout << "Hello world!\n";

    return 0
}
```

## 6. Build **1_helloWorld**, then run it
1. In **VS Code** on **1_helloWorld.cpp**, click the *Play* button to build the project
2. Open Terminal **in VS Code** with Keyboard Shortcut ``Ctrl + Shift + ` ``
3. Run 

## 7. Continue to project 2_multiplyBy2