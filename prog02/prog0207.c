#include <stdio.h>
main(){
    float raio, perimetro;
    double pi = 3.1415927, area;

    printf("Introduza o Raio da Circunferencia: "); scanf("%f",&raio);

    area = pi * raio *raio;
    perimetro = 2 * pi * raio;

    printf("Area = %f\nPerimetro = %f\n",area,perimetro);

}