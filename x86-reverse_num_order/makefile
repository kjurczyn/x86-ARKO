CC=gcc
ASMBIN=nasm
FUN_NAME=reverse_num_order

all : asm cc link clean
asm : 
	$(ASMBIN) -o $(FUN_NAME).o -f win64 $(FUN_NAME).nasm
cc :
	$(CC) -c -g -O0 main.c
link :
	$(CC) -o $(FUN_NAME) main.o $(FUN_NAME).o
clean :
	del /q *.o
