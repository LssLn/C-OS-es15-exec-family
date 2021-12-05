#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    //nome del nuovo programma
    char *const ls_argv[]="environ3",NULL};
    //preparazione environment array
    char *const ls_envp[] = {" path_tocode "};
    
    execve("path_to_environ3_exe",ls_argv,ls_envp);
    printf("se lo vedi, non ok");
    exit(1);
}
