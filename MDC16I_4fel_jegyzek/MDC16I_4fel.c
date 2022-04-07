#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <libgen.h>
#include <errno.h>
#include <string.h>
#include <getopt.h>
#include <sys/types.h>
#include <sys/syscall.h>
#include <errno.h>

void main(){

pid_t child_pid, wpid;                              //pid_t folyamat azonosito
int status = 0;
char *args[] = {"Valami1", "Valami2", "Valami3", NULL};

printf("Parent process, child inditas elott\n");    //Szulo kodja a gyermek process letrehozasa elott


    if ((child_pid = fork()) == 0) {
        execv("./Printer", args);
        exit(0);
    }

while ((wpid = wait(&status)) > 0);                 // Wait megvarja a gyermek process lefutasat, ha nincs futo gyermek process -1-et (hibát térít vissza)
                                                    // tehát addig vár a szülő futtatásával, amíg van gyermek process


printf("Parent process, child inditas utan\n");  //Szulo kodja a gyermek futasa utan


}
