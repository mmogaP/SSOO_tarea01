# SSOO_tarea01
Para la siguiente tarea se va a manejar procesos a través de señales y con el siguiente codigo se podra mandar señales a los procesos o a un grupo de procesos, como aborde la solución fue de la siguiente manera, dentro de la carpeta src se van a encontrar todos los codigos, el codigo usado va a ser hora.c, lo que realiza el codigo es esperar una señal para terminar un proceso, el numero del proceso o el PID se va a dar al principio de la ejecución, una vez con el PID podemos terminar el proceso dando una señal en otra terminal la cual va ser "# kill -s SIGUSER1 PID" o podemos terminar el proceso dentro de la misma terminal donde se ejecuto, mandando la señal "ctrl c" dos veces, cuando reciba una de estas dos señales se dara por terminada la ejecución del proceso y imprimira que recibió la señal y mostrara la fecha y hora en que se recibió la señal.

Para la ejecución del programa se creo un archivo Makefile, para ejecutar este archivo dentro del la terminal se tiene que posicionar dentro de la carpeta donde se encuentra este archivo y una vez dentro de la carpeta se ejecutan los siguientes comandos, primero "# make" y despues "# ./main".