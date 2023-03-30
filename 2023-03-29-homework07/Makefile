CC=gcc
CFLAGS=-g -Wall -std=gnu99 -fPIC
LD=gcc
LDFLAGS=-L.
AR=ar
ARFLAGS=rcs

TARGETS=libstr.a libstr.so str-static str-dynamic

all: $(TARGETS)

test:
	@$(MAKE) -sk test-all

test-all: test-libstr test-str

test-libstr: libstr.so
	curl -sLO https://raw.githubusercontent.com/nd-cse-20289-sp23/cse-20289-sp23-assignments/master/homework07/test_libstr.py
	chmod +x test_libstr.py
	./test_libstr.py -v

test-str: str-static str-dynamic
	curl -sLO https://raw.githubusercontent.com/nd-cse-20289-sp23/cse-20289-sp23-assignments/master/homework07/test_str.sh
	chmod +x test_str.sh
	./test_str.sh

.PHONY: clean
clean:
	-rm -f $(TARGETS) test_* *.o

%.o: %.c
	$(CC) $(CFLAGS) -c -o $@ $^

# TODO: Add rules for libstr.a libstr.so
libstr.a: library.o
	$(AR) $(ARFLAGS) $@ $^

libstr.so: library.o
	$(LD) -shared -o $@ $^ 

# TODO: Add rules for str-dynamic str-static
str-dynamic: main.o libstr.so
	$(LD) $(LDFLAGS) -o $@ $< -lstr

str-static: main.o libstr.a
	$(LD) $(LDFLAGS) -static -o $@ $< -lstr
