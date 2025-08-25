TARGET = hola
CFLAGS = -Wall -Wextra -pedantic

all: $(TARGET)

$(TARGET): $(TARGET).o
	gcc $(CFLAGS) $(TARGET).o -o $(TARGET)

$(TARGET).o: $(TARGET).c
	gcc $(CFLAGS) -c $(TARGET).c -o $(TARGET).o

run:
	./$(TARGET)

clean:
	rm *.o $(TARGET)

.PHONY: all clean run
