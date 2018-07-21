all:
	mkdir -p Clean\ System\ Files
	gcc -c convert.c
	mv convert.o Clean\ System\ Files/convert.o

test:
	cpm project test create
	cpm test.prj

clean:
	rm -r Clean\ System\ Files
	rm test

