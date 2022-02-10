output: main.o simplecalculator.output
    gcc main.o simplecalculator.o -o output

main.o: main.c
	 gcc -c main.c

simplecalculator.o: simplecalculator.c simplecalculator.h
     gcc -c simplecalculator.c

clean:
    rm *.o output	 
