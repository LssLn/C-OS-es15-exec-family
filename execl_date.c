#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (){
    execl("/bin/date","date",NULL);
    printf("Se questo messaggio apparre, errore");
    exit(1);   
}
