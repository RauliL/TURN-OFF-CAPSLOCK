#include <stdlib.h>
#include <stdio.h>
#include <X11/X.h>
#include <X11/XKBlib.h>

int main()
{
  Display* display;
  Bool sent;
  int err;

  if (!(display = XOpenDisplay(NULL)))
  {
    fprintf(stderr, "Couldn't open display\n");
    exit(EXIT_FAILURE);
  }

  if (!(sent = XkbLockModifiers(display, XkbUseCoreKbd, LockMask, 0)))
  {
    fprintf(stderr, "Couldn't send LatchLockState\n");
    exit(EXIT_FAILURE);
  }

  if ((err = XCloseDisplay(display)))
  {
    fprintf(stderr, "XCloseDisplay returned %d\n", err);
    exit(EXIT_FAILURE);
  }

  return EXIT_SUCCESS;
}
