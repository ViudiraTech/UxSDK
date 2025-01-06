#include "syscall-x86"

void sleep(__UINT32_TYPE__ timer)
{
	__syscall1(sleepid, timer);
	return;
}

void beep(int hertz)
{
	__syscall1(beepid, hertz);
	return;
}

int getpid(void)
{
	return __syscall0(getpidid);
}
