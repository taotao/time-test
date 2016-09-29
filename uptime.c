#include <stdio.h>
#include <sys/sysinfo.h>

int
    main(
        int argc,
        char *argv[])
{
    /* See structure define: `man sysinfo` */
    struct sysinfo sys_info;

    int rc = sysinfo(&sys_info);

    if (rc != 0)
        return -1;

    printf("uptime: %ld (seconds)\n", sys_info.uptime);

    return 0;
}
