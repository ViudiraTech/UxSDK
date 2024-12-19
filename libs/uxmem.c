#include "syscall-x86"

void *malloc(unsigned int size)
{
	return (void *)__syscall1(6, size);
}

void free(void *ptr)
{
	__syscall1(7, ptr);
}