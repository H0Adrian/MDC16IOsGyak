#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/syscall.h>

void printMyName(){
   char name[30] = "Adrian MDC16I";
   int i;

   for(i=0; i<10; i=i+1){

   printf("%s\n", name);

   }
   exit(0);
}

