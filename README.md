<div align="center">

https://github.com/German1127/holbertonschool-printf/assets/135637506/c01aeb5b-62a6-4087-9522-f8735ed1171b

<h1> Printf </h1>

> This repository contains the C - Printf project for Holberton School Uruguay.

 

</div>

<div align="center">

![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png)

</div>

<br>

## Table of contents
* [Introduction](#introduction)
* [Return](#return)
* [Tasks](#tasks)
* [Requirements](#requirements)
* [Resources](#resources)
* [Files](#files)
* [Usage](#usage)
* [Authors](#authors)

## Introduction
The project its about construct our own Printf to learn a get deeper into C lenguage. This objective is given us by Holberton School as our first pair programming project.

## Return
On success, _printf returns the number of characters printed (excluding the null byte). If an exit error is given.
Returns -1.

<details>
<summary><h2>Tasks</h2></summary>
0 : I'm not going anywhere. You can print that wherever you want to. I'm here and I'm a Spur for life : A function that produces output according to a format.
* Prototype: int _printf(const char *format, ...);
* Returns: the number of characters printed (excluding the null byte used to end output to strings)
* write output to stdout, the standard output stream
* format is a character string. The format string is composed of zero or more directives. See man 3 printf for more
* detail. You need to handle the following conversion specifiers:  
        - c  
        - s  
        - %  
* You don’t have to reproduce the buffer handling of the C library printf function.
* You don’t have to handle the flag characters.
* You don’t have to handle field width.
* You don’t have to handle precision.
* You don’t have to handle the length modifiers.

1 : Education is when you read the fine print. Experience is what you get if you don't : Handle the following conversion specifiers:  
         - d  
         - i
 * You don’t have to handle the flag characters.
 * You don’t have to handle field width.
 * You don’t have to handle precision.
 * You don’t have to handle the length modifiers.

2 : Just because it's in print doesn't mean it's the gospel : Create a man page for your function.
* How to read the man page: man ./man_3_printf
</details>

## Resources

* <a href="https://s3.eu-west-3.amazonaws.com/hbtn.intranet/uploads/misc/2022/11/d38f88e96a617135804dca9f9c49632751e06aa7.pdf?X-Amz-Algorithm=AWS4-HMAC-SHA256&X-Amz-Credential=AKIA4MYA5JM5DUTZGMZG%2F20230402%2Feu-west-3%2Fs3%2Faws4_request&X-Amz-Date=20230402T190913Z&X-Amz-Expires=86400&X-Amz-SignedHeaders=host&X-Amz-Signature=d790f5f554ca467bde78b2bdea00696fb975b6881076cfc28f58acecc569879c" target="blank">Secret of Printf</a>
* <a href="https://intranet.hbtn.io/concepts/881" target="blank">Approaching a Project</a>
* <a href="https://intranet.hbtn.io/concepts/893" target="blank">Group project</a>
* <a href="https://intranet.hbtn.io/concepts/894" target="blank">Pair programming - How to</a>
* <a href="https://intranet.hbtn.io/concepts/895" target="blank">Flowcharts</a>

<details>
<summary><h2>Requirements</h2></summary>
<h3>General Requirements</h3>
        
* Allowed editors: vi, vim, emacs
* All your files will be compiled on Ubuntu 20.04 LTS using gcc, using the options -Wall -Werror -Wextra -pedantic -std=gnu89
* All your files should end with a new line
* A README.md file, at the root of the folder of the project is mandatory
* Your code should use the Betty style. It will be checked using betty-style.pl and betty-doc.pl
* You are not allowed to use global variables
* No more than 5 functions per file
* In the following examples, the main.c files are shown as examples. You can use them to test your functions, but you don’t have to push them to your repo (if you do we won’t take them into account). We will use our own main.c files at compilation. Our main.c files might be different from the one shown in the examples
The prototypes of all your functions should be included in your header file called main.h
* Don’t forget to push your header file
* All your header files should be include guarded
* Note that we will not provide the _putchar function for this project
<h3>Authorized functions and macros</h3>

* ```write (man 2 write)```
* ```malloc (man 3 malloc)```
* ```free (man 3 free)```
* ```va_start (man 3 va_start)```
* ```va_end (man 3 va_end)```
* ```va_copy (man 3 va_copy)```
* ```va_arg (man 3 va_arg)```

<h3>Compilation</h3>
* gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o print
</details>

## Files
1. [_printf.c](#_printf.c)
2. [_putchar.c](#_putchar.c)
3. [get_function.c](#get_function.c)
5. [main.h](#main.h)

<a name="_printf.c"></a>
<h3><a href="https://github.com/German1127/holbertonschool-printf/blob/master/_printf.c">_printf.c</a></h3>
Main code of the printf function, when the format its NULL, starts with '%' followed by NULL or stars with '% ' followed by NULL, return -1 and finish. The main function consist in check if the current character is '%'.If it is right, it checks whether the next character is a format specifier. If it is, it executes the rest of the code. If it is 'NULL', it returns -1 and finishes.
<a name="_putchar.c"></a>
<h3><a href="https://github.com/German1127/holbertonschool-printf/blob/master/_putchar.c">_putchar.c</a></h3>
a function that it`s a simplified versions of normal putchar, having only a write. (simply to make the line shorter).
<a name="get_function.c"></a>
<h3><a href="https://github.com/German1127/holbertonschool-printf/blob/master/get_function.c">get_function.c</a></h3>
find and run the print function corresponding to the format type specified by t_step. Return the number of characters printed by the format function or 0 if not find a corresponding function. It is used in conjunction with the function printf to process specific formats.
<a name="main.h"></a>
<h3><a href="https://github.com/German1127/holbertonschool-printf/blob/master/main.h">main.h</a></h3>
contains the structures, prototypes and headers macros used by functions.

<details><summary><h2>Usage</h2></summary>
<details><summary><h3>Flowchart</h3></summary>
 ![Flowchart printf 100 (1) drawio](https://github.com/German1127/holbertonschool-printf/assets/135637506/38ceac38-f3c9-48f2-88fb-8f969022ff32)
</details>
<h3>Format of the Argument String</h3>
 
* The ***format*** string argument is a character string consisting of zero or more directives: ordinary characters (other than ***%***).
 
* The conversion specification is entered with the % character.

* It ends with a conversion specifier (which together make up the format specifier).
<h3>Instructions</h3>
 To use _printf in your projects you need to follow the steps below.
 
 1. Copy the "main.h", "_printf.c", "get_function.c" and "_putchar.c" files to your project directory.
 
 3. Include "main.h" in your header file like this:
```
#include "main.h"</code>
```
 
 4. Write this in your terminal when you are in your project folder.
 ```
 gcc -Wall -Werror -Wextra -pedantic -std=gnu89 test/main.c *.c -o print</code>
 ``` 
 5. Use it like a normal printf.

<h3>Example</h3>

For example, if i want to print "Test string" i will do:
```c
#include "main.h"
int main()
{
	_printf("%s\n", "Test string");
	return(0);
}
```
and the ouput will be:
```c
Test String
```

</details>

<div align="center">

## Authors
  
&ensp;[<img src="https://img.shields.io/badge/Nitsu47-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/Nitsu47)
&ensp;[<img src="https://img.shields.io/badge/German1127-%23121011.svg?style=for-the-badge&logo=github&logoColor=white">](https://github.com/German1127)
<br>

![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png) ════════════════════ ![sea-horse](https://user-images.githubusercontent.com/110431271/229328604-b8c19c26-54e9-48d6-946f-91b0337deece.png)

<br>

Last updated: July 25, 2023

</div>

