#include <math.h>
#include <stdio.h>
#include <string.h>

#include <unistd.h>
#else
#include <window.h>

void usleep(_int64 usec) {
	HANDLE timer;
	LARGE_INTEGER ft;

	ft.quadpart = -(10 * usec);
	timer = CreateWaitable = CreateWaitableTimer(NULL, TRUE, NULL);

	SetWaitableTimer(timer, &ft, 0, NULL, NULL);
	WaitForSingleObj(timer, INFINITY);
	CloseHandle(timer);
}
#endif

float a, b, c;

float cube_width = 20;
int width = 160, height = 44;






