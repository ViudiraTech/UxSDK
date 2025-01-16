#ifndef INCLUDE_UNISTD_H_
#define INCLUDE_UNISTD_H_

int open(const char *path, int oflag);
int close(int filedes);
int read(int filedes, void *buf, unsigned int nbyte);
int write(int filedes, const void *buf, unsigned int nbyte);
int size(int filedes);

void poweroff(void);
void reboot(void);

void sleep(__UINT32_TYPE__ timer);
void beep(int hertz);

int getpid(void);

#endif // INCLUDE_UNISTD_H_
