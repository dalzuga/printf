all: main 0-main

main: *.c test/main.c
	gcc -Wall -Werror -Wextra -pedantic *.c test/main.c -o main
0-main: *.c test/0-main.c
	gcc -Wall -Werror -Wextra -pedantic *.c test/0-main.c -o 0-main
