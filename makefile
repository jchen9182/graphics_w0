all: program
	gcc -o program program.c
	./program
clean:
	rm program image.ppm
