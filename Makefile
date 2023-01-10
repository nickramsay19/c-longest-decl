CC = gcc -Werror

all: dist/main

dist/main: build/main.o dist
	$(CC) -o dist/main build/main.o

build/main.o: src/main.c build
	$(CC) -o build/main.o -c src/main.c 

dist:
	mkdir dist

build:
	mkdir build

.PHONY: clean
clean:
	rm -Rf dist build

