/*
* Demo application 4
*
*/
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <errno.h>
#include <fcntl.h>
#include <signal.h>

int main(int argc, char *argv[])
{
    fprintf(stderr, "This is ouput from a demo program - %s.\n", argv[0]);
    return 0;
}

