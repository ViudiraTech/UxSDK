#ifndef INCLUDE_UNISTD_H_
#define INCLUDE_UNISTD_H_

int open(const char *pathname, int flags);
int close(int fd);
int read(int fd, void *buf, unsigned int count);
int size(int fd);

void poweroff(void);
void reboot(void);

void sleep(__UINT32_TYPE__ timer);
void beep(int hertz);

int getpid(void);

#endif // INCLUDE_UNISTD_H_
