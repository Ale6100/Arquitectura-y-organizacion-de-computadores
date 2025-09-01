TARGET = index
CFLAGS = -Wall -Wextra -pedantic

all: $(TARGET).out run clean

$(TARGET).out: $(TARGET).o
	gcc $(CFLAGS) $(TARGET).o -o $(TARGET).out

$(TARGET).o: $(TARGET).c
	gcc $(CFLAGS) -c $(TARGET).c -o $(TARGET).o

run:
	./$(TARGET).out

clean:
	rm *.o $(TARGET).out

.PHONY: all clean run
