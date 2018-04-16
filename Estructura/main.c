#include <stdio.h>
#include <stdlib.h>
#define LONG 30// es un definido mal llamado constante;
//estructura
typedef struct
{
//campos de la  estructura
    int legajo;
    char nombre[LONG];
    int nota1;
    int nota2;
    float promedio;
    char email[50];

} eAlumno;

void mostrarAlumno(eAlumno alumnito);
int main()
{ eAlumno miAlumno={30,"juan",10,6,8,"juaan"};
printf("Ingrese legado");
scanf("%d",&miAlumno.legajo);
printf("Ingrese Nombre");
gets(miAlumno.nombre);
printf("Ingrese nota 1");
scanf("%d",&miAlumno.nota1);
printf("Ingrese nota 2");
scanf("%d",&miAlumno.nota2);
printf("ingrese mail");
gets(miAlumno.email);
mostrarAlumno(miAlumno);


    /*printf("&d",sizeof(eAlumno));//imprime la cantidad de memoria reservada por la estructura
    eAlumno miAlumno;// tipo de dato y variable
    eAlumno otroAlumno;
    miAlumno.legajo=20;// para acceder a la estructura se pone punto.
    miAlumno.nota1=10;
    miAlumno.nota2=5;
    strcpy(miAlumno.nombre,"juan");
    strcpy(miAlumno.email,"leandro@gmail.com");
    miAlumno.promedio=(float)(miAlumno.nota1+miAlumno.nota2/2);
    otroAlumno = miAlumno;

    mostrarAlumno(miAlumno);
    mostrarAlumno(otroAlumno);
    return 0;*/
}

