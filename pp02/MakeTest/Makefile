all: one two

one: print_number1.o main.o
	gcc -o main main.o print_number1.o

two: print_number2.o main.o
	gcc -o main main.o print_number2.o

print_number1.o: print_number1.c
	gcc -c -o print_number1.o print_number1.c

print_number2.o: print_number2.c
	gcc -c -o print_number2.o print_number2.c

main.o: main.c
	gcc -c -o main.o main.c

clean: 
	rm -rf *.o main
