CC      = gcc
CFLAGS  = -g
RM      = rm -f


default: all

all: c_program

c_program: c_program.c
	$(CC) $(CFLAGS) -o c_program c_program.c

clean veryclean:
	$(RM) c_program
