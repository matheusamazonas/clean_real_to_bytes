all:
	mkdir -p Clean\ System\ Files
	gcc -c convert.c
	mv convert.o Clean\ System\ Files/convert.o
