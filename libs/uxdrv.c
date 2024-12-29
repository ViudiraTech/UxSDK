#include "syscall-x86"

void sleep(__UINT32_TYPE__ timer)
{
	__syscall1(12, timer);
	return;
}

void beep(int hertz)
{
	__syscall1(13, hertz);
	return;
}
