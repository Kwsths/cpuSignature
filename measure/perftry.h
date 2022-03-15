#ifndef PERFTRY_H
#define PERFTRY_H

#include <linux/ioctl.h>

#define MAJOR_NUM 100

#define IOCTL_ENABLE_INTERUPTS _IOWR(MAJOR_NUM, 2, int)

#define IOCTL_DISABLE_INTERUPTS _IOWR(MAJOR_NUM, 1, int)

#define DEVICE_FILE_NAME "perf_try"

#endif