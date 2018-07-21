all: build test

build:
	mkdir -p Clean\ System\ Files
	gcc -c convert_real.c
	mv convert_real.o Clean\ System\ Files/convert_real.o

test:
	cpm project test create
	cpm test.prj

clean:
	rm -r Clean\ System\ Files
	rm test

