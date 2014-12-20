all: shutdown

shutdown:
	gcc -o sd shutdown.c

clean:
	rm -f sd sd.exe