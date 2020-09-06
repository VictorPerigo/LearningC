#include <stdio.h>

main(){
    // utilizando notação cientifica
    
    float quilos = 1.0E3, n_toneladas; //Uma tonelada são 1000 quilos
    double gramas = 1.0e6; //Uma tonelada são 1 000 000 de gramas

    printf("quantas toneladas comprou: "); scanf("%f",&n_toneladas);
    printf("numero de quilos = %f = %e\n", n_toneladas * quilos, n_toneladas * quilos);
    printf("Numero de gramas = %f = %E\n",n_toneladas * gramas, n_toneladas * gramas);
}