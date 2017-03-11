#include <stdio.h>


int main(int argc, char const *argv[])
{
	int c;
	int cuenta = 0, total;

    //c = getchar();


    while( c != EOF){
        //putchar(c); //Escribe el valor de la variable c, lo que escriba. 
        c = getchar();   

        total = cuenta++;
    }
    
    printf("El número de caracteres es: %d\n", total);

	return 0;
}

