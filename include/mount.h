#ifndef INCLUDE_MOUNT_H_
#define INCLUDE_MOUNT_H_

int mount(const char *source, const char *target);
int umount(const char *target);

#endif // INCLUDE_MOUNT_H_