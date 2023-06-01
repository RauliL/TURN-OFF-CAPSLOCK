default :
	$(CC) main.c -o TURN-OFF-CAPSLOCK -lX11

clean :
	rm -f TURN-OFF-CAPSLOCK

install :
	install TURN-OFF-CAPSLOCK /usr/local/bin/TURN-OFF-CAPSLOCK
