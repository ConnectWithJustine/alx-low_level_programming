## 0x09-static_libraries

### what is static library?

A static library is a colloection of object files that are linked with a program at compile time, resulting in a self-contained executable file.

To create a static library, you need to first compile the source code files into object file using a compiler such as GCC. Once you have the object files, you can use the ar (archiver) tool to create a library file (.a extension) by grouping them together. ar can also be use to add or remove object files from the library and update the library's index using ranlib.

To use a static library in your program, you need to include the library file and header files in your source code, and then link them with your program using the compiler. When the program is compiled, the library code is copied into the executable, making the program independent of any external library dependencies.

The basic usage of ar involves using command-line options to create, modify, or list the contents of a library file. Ranlib is used to update the index of the library file. Nm is a tool used to list the symbols in an object file or library.
