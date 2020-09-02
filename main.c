#include <stdio.h>
#include <stdlib.h>
#include <sys/utsname.h>

void main(){

struct utsname unameData;

uname(&unameData);

printf("Sistemas Operacionais \n");
printf("Comando uname: \n");
printf("%s %s %s %s %s", unameData.sysname, unameData.nodename, unameData.release, unameData.version, unameData.machine );


}