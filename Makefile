all:t loop signal_demo

t:
	gcc -g -o t t.c
loop:
	gcc -g -o loop loop.c
signal_demo:
	gcc -g -o signal_demo signal_demo.c

clean:
	rm -rf loop signal_demo t
