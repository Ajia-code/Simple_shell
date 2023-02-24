<h1> Command interpreter - Simple Shell poject</h1></p>

## Description

As part of the ALX Software Engineering Course, we implemented the shell program with some capabilities similar to those of the modern command line interpreters in Linux distributions.

## Compilation

The program is compiled using
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

### Functions
There are some functions used to run our simple shell

* [_myexit](https://github.com/Villasdaniel/simple_shell/blob/master/built-in.c)
Function that check command line to exit shell.

* [signal_c](https://github.com/Villasdaniel/simple_shell/blob/master/built-in.c)
Function that make shell ignore input signal Ctrl + C.

* [_myenv](https://github.com/Villasdaniel/simple_shell/blob/master/built-in.c)
Function tht prints the environment variables separated

* [_getenv](https://github.com/Villasdaniel/simple_shell/blob/master/core_functions.c)
Functions that find the env variable name

* [_getline](https://github.com/Villasdaniel/simple_shell/blob/master/core_functions.c)
Function that get line command line from the prompt.

* [splitline](https://github.com/Villasdaniel/simple_shell/blob/master/core_functions.c)
Function that get line command line from the prompt.

* [execute_process](https://github.com/Villasdaniel/simple_shell/blob/master/core_functions.c)
Function that execute a process.

* [_which](https://github.com/Villasdaniel/simple_shell/blob/master/core_functions.c)
Function that search for a command in the directories.

* [_link](https://github.com/Villasdaniel/simple_shell/blob/master/list_functions.c)
Function that built linked list with directories stored in the environment.

* [_add_nodeint_end](https://github.com/Villasdaniel/simple_shell/blob/master/list_functions.c)
Function that add a new string to a node at the end.

* [free_list](https://github.com/Villasdaniel/simple_shell/blob/master/list_functions.c)
Function that frees a list_t list.

* [free_array](https://github.com/Villasdaniel/simple_shell/blob/master/list_functions.c)
Function that frees an array.

* [_strlen](https://github.com/Villasdaniel/simple_shell/blob/master/str_functions.c)
Function that find the length of a string.

* [_strcat](https://github.com/Villasdaniel/simple_shell/blob/master/str_functions.c)
Function that concatenate directories with the 1st position of the array.

* [_strtok](https://github.com/Villasdaniel/simple_shell/blob/master/str_functions.c)
Function that breaks a string into a sequence.

## Testing 
The program works in both interactive and non interactive mode.

Examples

Non interactive mode

input:

$ echo "qwerty" | ./a.out

Output:

error: No such file or directory

$ ./hsh ls -l

total 64
-rw------- 1 u0_a2816 u0_a2816   117 Feb 21 17:34 AUTHORS

-rw------- 1 u0_a2816 u0_a2816  1280 Feb 21 17:20 built-in.c

-rw------- 1 u0_a2816 u0_a2816  3181 Feb 21 17:19 core_functions.c

  -rw------- 1 u0_a2816 u0_a2816   444 Feb 21 17:20 getchar.c
  
  -rwx------ 1 u0_a2816 u0_a2816 17976 Feb 21 17:25 hsh
  
  -rw------- 1 u0_a2816 u0_a2816  1040 Feb 21 17:23 list_functions.c
  
  -rw------- 1 u0_a2816 u0_a2816  1588 Feb 21 17:21 main.h
  
  -rw------- 1 u0_a2816 u0_a2816  1593 Feb 21 17:23 printf.c
  
  -rw------- 1 u0_a2816 u0_a2816   680 Feb 21 17:24 process_functions.c
  
  -rw------- 1 u0_a2816 u0_a2816  1108 Feb 21 17:24 shell.c
  
  -rw------- 1 u0_a2816 u0_a2816  1935 Feb 21 17:25 str_functions.c
  

Interactive mode

$ ls -l

total 64
-rw------- 1 u0_a2816 u0_a2816   117 Feb 21 17:34 AUTHORS

-rw------- 1 u0_a2816 u0_a2816  1280 Feb 21 17:20 built-in.c

-rw------- 1 u0_a2816 u0_a2816  3181 Feb 21 17:19 core_functions.c

-rw------- 1 u0_a2816 u0_a2816   444 Feb 21 17:20 getchar.c

-rwx------ 1 u0_a2816 u0_a2816 17976 Feb 21 17:25 hsh

-rw------- 1 u0_a2816 u0_a2816  1040 Feb 21 17:23 list_functions.c

-rw------- 1 u0_a2816 u0_a2816  1588 Feb 21 17:21 main.h

-rw------- 1 u0_a2816 u0_a2816  1593 Feb 21 17:23 printf.c

-rw------- 1 u0_a2816 u0_a2816   680 Feb 21 17:24 process_functions.c

-rw------- 1 u0_a2816 u0_a2816  1108 Feb 21 17:24 shell.c

-rw------- 1 u0_a2816 u0_a2816  1935 Feb 21 17:25 str_functions.c
