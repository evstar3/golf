CC=gcc

case: case.c
	$(CC) -o $@ $^

score: case.c
	cat case.c | head -n 3 | head -c -1 | wc -c

test: case
	./case "Hello World"

clean:
	rm case 2> /dev/null
.PHONY: clean