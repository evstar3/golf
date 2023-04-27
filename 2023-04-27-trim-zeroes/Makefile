
all: zero

zero: zero.c
	gcc zero.c -o zero

test: test.sh zero
	./test.sh

size: zero.c
	make test &> /dev/null && cat zero.c | head -n 1 | tr -d "\n" | wc -c

clean:
	rm -f zero
.PHONY: clean