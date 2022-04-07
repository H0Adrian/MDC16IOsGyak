#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/syscall.h>
int main () {
    char input[10];

    printf("Irja be az Unix parancsot:");
    scanf("%s", input);
    system(input);

}
