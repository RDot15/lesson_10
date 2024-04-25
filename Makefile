all: prog_10.exe

prog_10.exe: lesson_10_hw.o func.o
	gcc -o prog_10 func.o lesson_10_hw.o

lesson_10_hw .o:
	gcc -c -std=c99 -o lesson_10_hw.o lesson_10_hw.c
func.o:
	gcc -c -std=c99 -o func.o func.c
clean:
	dell *.o
	dell *.exe
  