#include <stdio.h>
#include <stdlib.h>

int main() //punto de entrada
{
    int numero1;
    numero1 = 88;
    float numero2; //La mascar normalmente es "%f", sin embargo, si utilizamos "%.2f" redondea el numero con 2 decimales
    numero2 = 1.100004; //son 6 decimales despues de la coma
    float resultado;
    char letra;

    /*printf("Ingrese un numero entero: ");
    scanf("%d",&numero1); //pasamos como paramatero la mascara y la direccion de memoria (solo si uso el & me da la direccion de memoria)
    printf("\nIngrese un numero con coma: ");
    scanf("%f",&numero2);

    printf("\nEl numero es: %d y el numero flotante es: %f\n", numero1,numero2); //el contra-barra es una secuencia de escape*/


    printf("Ingrese un numero: ");
    scanf("%d",&numero1);
    printf("\nIngrese un segundo numero: ");
    scanf("%f",&numero2);
    printf("\nIngrese una letra: ");
    //fflush(stdin); //limpia el buffer para que tome la letra
    letra=getch();
    scanf("%c",&letra);

    resultado=numero1+numero2;

    printf("\nEl numero es: %d y el numero flotante es: %f\n", numero1,numero2); //el contra-barra es una secuencia de escape*/
    printf("\nEl resultado de la suma es: %.2f\n",resultado);
    printf("\nLa letra es: %c\n",letra);

    return 0;
}

     //Si apretamos "abort": administrador de tareas, codeblock console block (?) y se soluciona

//El "\t" sirve para tabular y se podria utilizar para crear una lista.
//El sistema operativo es el que se encarga de llamar a la operacion
//el contrabarra es: alt+92
//el getche (muestra la letra ingresada) y el getch (NO muestra la letra ingresada) se utiliza con los caracteres




