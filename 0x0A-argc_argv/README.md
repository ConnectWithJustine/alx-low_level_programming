## 0x0A-argc_argv

### What is Arguments to main

In c language **'main'** refers to the entr point of a program, which is typically a function that is called when the program starts running. The **'main'** function can take arguments, which are passed to it when the program is executed.

**'main**' function has two arguments: **'argc'** (argument count) and **'argv'** (argument vector). **'arg'** is an integer that specifies the number of command-line arguments passed to the program, including the program name itself. **'argv'** is an array of strings that contains the actual command-line arguments as individual strings.

syntax: int main(int argc, char \*argv\[\])
\{
return (0);
\}

#### Sample

\#include \<stdio.h\>

int main(int argc, char\* argv\[\]) \{
    printf("The program name is: %s\n", argv[0]);
    printf("The number of arguments is: %d\n", argc);

    for (int i = 1; i < argc; i++) {
        printf("Argument %d is: %s\n", i, argv[i]);
    }

    return 0;
}

