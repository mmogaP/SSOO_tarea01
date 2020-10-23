CFLAGS = -c
VPATH = src

main: hora.c 
	gcc -o $@ $?  

clean:
	rm -f main	