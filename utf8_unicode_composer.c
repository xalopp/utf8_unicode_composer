#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(int argc, char **argv)
{
    int count = atoi(argv[1]);
    char ca_buf[] = {0xca};
    char cb_buf[] = {0xcb};
    char cc_buf[] = {0xcc};
    char cd_buf[] = {0xcd};
    char buf[] = {0x88};
    char count_buf[5];

    for (int i=0; i < count; i++) {
        snprintf(count_buf, 5, "%3d ", i); 
        buf[0] = 0x80 + i;

        write(1, count_buf, 4);
        write(1, argv[2], strlen(argv[2]));
        write(1, ca_buf, 1);
        write(1, buf, 1);
        write(1, " ", 1);
        write(1, argv[2], strlen(argv[2]));
        write(1, cb_buf, 1);
        write(1, buf, 1);
        write(1, " ", 1);
        write(1, argv[2], strlen(argv[2]));
        write(1, cc_buf, 1);
        write(1, buf, 1);
        write(1, " ", 1);
        write(1, argv[2], strlen(argv[2]));
        write(1, cd_buf, 1);
        write(1, buf, 1);
        write(1, "\n", 1);
    }

    return 0;
}
