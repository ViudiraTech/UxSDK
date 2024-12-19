#include "syscall-x86"

void poweroff(void)
{
	__syscall0(10);
}

void reboot(void)
{
	__syscall0(11);
}
