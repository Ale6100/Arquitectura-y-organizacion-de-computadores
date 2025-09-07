TARGET = index
CFLAGS = -Wall -Wextra -pedantic -g

all: $(TARGET).out run

val: $(TARGET).out debug

gdb:
	gdb $(TARGET).out

$(TARGET).out: $(TARGET).o
	gcc $(CFLAGS) $(TARGET).o -o $(TARGET).out

$(TARGET).o: $(TARGET).c
	gcc $(CFLAGS) -c $(TARGET).c -o $(TARGET).o

run:
	./$(TARGET).out

debug:
	valgrind ./$(TARGET).out

clean:
	rm *.o *.out

.PHONY: all clean run val debug gdb
