#include "syscall-x86"

void poweroff(void)
{
	__syscall0(11);
}

void reboot(void)
{
	__syscall0(12);
}
