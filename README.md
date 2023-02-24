Simple shell team project
As part of the ALX Software Engineering Course, we impliimplem the shell program with some capabilities similar to those of the modern command line interpreters in Linux distributions.

The program is compiled using
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 *.c -o hsh

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
