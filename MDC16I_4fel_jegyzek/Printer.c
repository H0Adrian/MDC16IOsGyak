#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/syscall.h>

int main(int argc, char *argv[]){

printf(" Printer nevu programban vagy \n");
printf("PID-je: %d\n",getpid());
return(0);

}





