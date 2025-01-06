#include "syscall-x86"

void *malloc(unsigned int size)
{
	return (void *)__syscall1(mallocid, size);
}

void free(void *ptr)
{
	__syscall1(freeid, ptr);
}
