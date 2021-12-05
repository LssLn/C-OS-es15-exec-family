#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char *const ls_argv[]={"ls","-l",NULL};
    execv("/bin/ls",ls_argv);
    printf("not ok");
    exit(1);
}
