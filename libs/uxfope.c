#include "syscall-x86"

int open(const char *pathname, int flags)
{
	return __syscall2(openid, pathname, flags);
}

int close(int fd)
{
	return __syscall1(closeid, fd);
}

int read(int fd, void *buf, unsigned int count)
{
	return __syscall3(readid, fd, buf, count);
}

int size(int fd)
{
	return __syscall1(sizeid, fd);
}

int mount(const char *source, const char *target)
{
	return __syscall2(mountid, source, target);
}

int umount(const char *target)
{
	return __syscall1(umountid, target);
}
