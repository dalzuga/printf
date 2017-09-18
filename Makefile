all: main

main: *.c main.c
	gcc -Wall -Werror -Wextra -pedantic printf.c main.c -o main
0-main: printf.c test/0-main.c
	gcc -Wall -Werror -Wextra -pedantic printf.c test/0-main.c -o 0-main
