#include "syscall-x86"

int open(const char *path, int oflag)
{
	return __syscall2(openid, path, oflag);
}

int close(int filedes)
{
	return __syscall1(closeid, filedes);
}

int read(int filedes, void *buf, unsigned int nbyte)
{
	return __syscall3(readid, filedes, buf, nbyte);
}

int write(int filedes, const void *buf, unsigned int nbyte)
{
	return __syscall3(writeid, filedes, buf, nbyte);
}

int size(int filedes)
{
	return __syscall1(sizeid, filedes);
}

int mount(const char *source, const char *target)
{
	return __syscall2(mountid, source, target);
}

int umount(const char *target)
{
	return __syscall1(umountid, target);
}
