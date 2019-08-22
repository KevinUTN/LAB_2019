#include <stdio.h>
#include <stdlib.h>

int main()
{
    int edad;
    //edad = 13;
    float altura;

    float acumuladorH = 0;

    float promedioHombre;
    promedioHombre = 0;
    //altura = 1.69;
    char sexo;
    //sexo = 'f';
    int i;


    i=0;
    int acumulador;
    acumulador =0;
    float maxAltura;
    maxAltura = 0.0;


    float alturaMasVieja;
    alturaMasVieja =0.0;

    int maxEdad;
    maxEdad = 0;

    float minAltura;minAltura;
    minAltura = 0.0;minAltura;

    int promedio = 0;

    int minEdad;
    minEdad = 0;

    char maxSexo;
    maxSexo = 'm';

    float minEdadAltura;
    minEdadAltura = 0.0;

    int edadAltura;
    edadAltura =0;

/*
    scanf("%d",&edad);
    scanf("%f",&altura);
    fflush(stdin); //despues de un float
    scanf("%c",&sexo);// guardad datos

    printf("su edad es %d, su altura es %f y su sexo es %c\n",edad,altura,sexo);

    if(edad <13)
    {
        printf("Es un nene");
    }
    else if(edad >=13 && edad <18)
    {
        printf("es un adolecente");
    }
    else
    {
        printf("es un adulto");
    }
*/

    do
    {   printf("ingresar edad: \n");
        scanf("%d",&edad);
        fflush(stdin);
        printf("ingresar sexo: \n");
        scanf("%c",&sexo);
        printf("ingresar altura: \n");
        scanf("%f",&altura);
        fflush(stdin);


    if(altura > maxAltura)
        {
            maxSexo = sexo;
            maxAltura = altura;


        }

        if(sexo == 'f')
        {
            if(edad > minEdad)
            {
                minEdad = edad;
                alturaMasVieja = altura;
            }
        }

        if(edad < minEdad)
        {
            minEdad = edad;
            minEdadAltura = altura;
        }


    if(sexo == 'm')
    {
        acumuladorH = acumuladorH + altura;
        if(altura < minAltura)
        {
            minAltura = altura;
            minEdad = edad;
        }
    {

    }
    }

    acumulador = acumulador + edad;


    i++;




    }while(i<3);
  //printf("La altura mayor es %f, su edad es %d y su sexo es %c",maxAltura,maxEdad,maxSexo);

  promedio = acumulador / i;
  promedioHombre = acumuladorH / i;


  printf("altura de la mujer mas vieja es %f\n",alturaMasVieja);
  printf("la altura del mas joven es %f\n",minEdadAltura);
  printf("sexo del mas alto %c\n",maxSexo);
  printf("edad del hombre mas bajo %d",minEdad);

  printf("el promedio de las edades es %d", promedio);
  printf("el promedio de altura de los hombres es %f", promedioHombre);



  // verificar todo



    return 0;
}
