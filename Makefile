CFLAGS := -g3 -O0 -Wall -Wextra -Woverflow -Wconversion -Werror
LDFLAGS := -g3 -O0

all: main unittest

main: execution_ctx.o entry.o sl_impl.o dpm.o inp.o ssh.o
	$(CC) $(LDFLAGS) $^ -o $@

unittest: unittest.o sl_impl.o
	$(CC) $(LDFLAGS) $^ -o $@

.PHONY: clean

clean:
	-rm *.o main unittest
