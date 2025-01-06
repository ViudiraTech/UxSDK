#include "syscall-x86"

void poweroff(void)
{
	__syscall0(poweroffid);
}

void reboot(void)
{
	__syscall0(rebootid);
}
