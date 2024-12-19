#ifndef INCLUDE_UNISTD_H_
#define INCLUDE_UNISTD_H_

int open(const char *pathname, int flags);
int close(int fd);
int read(int fd, void *buf, unsigned int count);

void poweroff(void);
void reboot(void);

#endif // INCLUDE_UNISTD_H_
