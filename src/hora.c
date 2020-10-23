#include <stdio.h>
#include <sys/types.h>
#include <unistd.h>
#include <stdlib.h>
#include <signal.h>
#include <unistd.h>
#include <time.h>


void handler(int signum){

    time_t rawtime;
    struct tm * timeinfo;

    time(&rawtime);
    timeinfo = localtime (&rawtime); //Obtengo hora y fecha actual del sistema, ejemplo Fri Oct 23 11:31:42 2020 

    if(signum == SIGUSR1){
        printf("Señal SIGUSR1 recibida: %s", asctime(timeinfo)); //una vez que reciba la señal SIGUSER1 podra matar el proceso
        exit(0);
    }
    
    else if (signum == SIGINT)
    {
        printf("\nSeñal SIGUSR1 recibida: %s", asctime(timeinfo));
        signal(SIGINT, SIG_DFL); //con esta señal ignora la primera y aplica la segunda para matar el proceso

    }
    
}   

int main(){

    //A mi funcion le doy las siguientes señales que se van a ocupar SIGUSER1 que se mata en consola y SIGINT que mato en terminal el cual seria #ctrl c
    signal(SIGUSR1, handler); 
    signal(SIGINT, handler);

    printf("Programa hora ejecutandose. PID=%d\n", getpid()); //imprimo el mensaje y el pid del proceso que quiero matar
    
    for (int i = 0; i < 1;){ //loop infinito hasta que reciba la señal para matar el proceso
        printf("Listo para recibir la señal SIGUSR1.\n");
        sleep(1); 
        
    } 

}