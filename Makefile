all: shutdown

shutdown:
	gcc -o shutdown shutdown.c

clean:
	rm -f shutdown shutdown.exe