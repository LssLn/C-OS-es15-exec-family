#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
extern char **environ;
/* è un puntatore a puntatori a char, quindi può fare da puntatore ad un vettore di stringhe. Nello specifico, la variable environ punta ad un array di puntatori a stringhe detto ambiente */
int main() {
char **env=environ;
while(*env) {
printf("%s \n ", *env);
env++;
}
exit(0);
}