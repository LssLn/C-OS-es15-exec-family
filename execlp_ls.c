#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    execlp("ls","ls","-l",NULL);
    //execlp("ps","ps","-l",NULL);
    printf("Se lo vedi, non va bene");
    exit(1);   
}
