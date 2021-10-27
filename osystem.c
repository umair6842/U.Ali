#include<string.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<cstdio>
int main(int os, char* ar[]){
int id=fork();



printf("Current ID: %d\n",getpid());



printf("Parent ID: %d\n",getppid());


return 0;
}
