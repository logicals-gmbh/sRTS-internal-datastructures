CFLAGS := -Wall -Wextra -Woverflow -Wconversion -Werror
all: main unittest

main: main.o sl_impl.o dpm.o inp.o ssh.o

unittest: unittest.o sl_impl.o

.PHONY: clean

clean:
	-rm *.o main unittest
