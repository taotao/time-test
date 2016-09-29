#include <stdio.h>
#include <time.h>

int
    main(
        int argc,
        char *argv[])
{
    /* See struction: `man clock_gettime` */
    struct timespec time_spec;

    int rc = clock_gettime(CLOCK_MONOTONIC_RAW, &time_spec);

    printf("seconds: %ld\n", time_spec.tv_sec);
    printf("nanoseconds: %ld\n", time_spec.tv_nsec);

    return 0;
}
