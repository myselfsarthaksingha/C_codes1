/*
    C is basically a Procedural oriented language (POP). So it follows procedures. When we are doing some task in C, everything
is a procedure. This procedure in C is called functions. So whenever we want to achieve anything in C, we need to create
functions. Functions are basically used to do a task. There are two types of functions: inbuilt functions and user defined
functions.

    When we are printing something we need to print in exact format. So we need to use double quotes. Double quotes is used to
print strings. String is a combination of characters. Here 'Hello World' is a string, which is combination of characters.


    Whenever we want to execute the code, the code needs a starting point. That starting point in C is called as 'main()' function.
main function is defined by curly braces or '{ }'. So anything we define inside the curly braces, it will execute those tasks. We
cannot execute a C code without 'main()'. 'main()' is the first thing, that CPU will execute.


    Every inbuilt function or method has a proper definition. That definition is available or included in a file called 'stdio.h'. Here '.h'
is the extension of the file. 'stdio' stands for Standard Input Output and 'h' stands for Header file. In the header file all the
definitions of functions are available.

    All the functions are defined in any header file. The header file can be anything like stdio.h, abc.h, ***.h etc.
    To use or include the header file in the code, we need a keyword called as 'include'. Whenever we want to use header file,
we need to put it inside angular braces or '< >'.


To clear the last output, we have to call a function called 'clrscr();'. It means clear screen.
To hold the screen of output we have to use a function called 'getch();'. It stands for get character. This function holds the screen until we press a key.
'getch()' belongs to in a header file called 'conio.h'. So to use 'getch()' we have to include this header file by '#include<conio.h>'
'conio' stands for console input output. 


*/


#include<stdio.h>   // Since we use this line before 'printf()' while execution, we need to use a hash or '#'.
// Hash is called as preprocessor. Anything which is defined using hash is called preprocessor.

main()
{
    printf("Hello World");   // To print something we need to use a function called 'printf()'. It is an inbuilt function.
    // After a statement or after a line we have to give a semicolon. It defines the end of the statement.
}
