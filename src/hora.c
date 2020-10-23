#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>

int main(){

    pid_t pid0;

    printf("Programa hora ejecutandose. PID=%d\n", getppid());
}