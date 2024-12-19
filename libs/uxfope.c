#include "syscall-x86"

int open(const char *pathname, int flags)
{
	return __syscall2(1, pathname, flags);
}

int close(int fd)
{
	return __syscall1(2, fd);
}

int read(int fd, void *buf, unsigned int count)
{
	return __syscall3(3, fd, buf, count);
}

int mount(const char *source, const char *target)
{
	return __syscall2(8, source, target);
}

int unmount(const char *target)
{
	return __syscall1(9, target);
}
