//
// Created by dandy on 20.11.21.
//
#include "types.h"
#include "user.h"
#include "fcntl.h"

int
main(void)
{
    int fd;

    fd = open("dup2_test_file", O_CREATE | O_RDWR);
    dup2(fd,1);
    if(fd < 0) {
        exit();
    }

    printf(1, "If everything went correctly this should be in the file and not on the commandline\n");
    close(fd);

    exit();
}