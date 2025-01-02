#include "syscall-x86"

void sleep(__UINT32_TYPE__ timer)
{
	__syscall1(13, timer);
	return;
}

void beep(int hertz)
{
	__syscall1(14, hertz);
	return;
}

int getpid(void)
{
	return __syscall0(15);
}
