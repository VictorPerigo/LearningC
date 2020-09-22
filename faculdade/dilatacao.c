#include <stdio.h>

/* De quanto é a variação de volume sofrido por um paralelepido de tungstênio que teve sua temperatura aumentada em 35°C.
 * Sabe-se que antes de ser aquecida seu volume era de 125 cm³
 * e que o coeficiente de dilatação linear do corpo é de 4.3µ C^-1.
 *
 * 2010240- Victor R. Perigo de Oliveira
 * 2011100 - Eduardo Dias Pereira Filho
 * 2011687 - Nathan Milhomen de Morais
 * 2010327 - Caio Alexandre Reis de Almeida
 * 2010099 - Ana Vitoria Rezende De Oliveira
 */
main(){
    float coeficiente, volumeInicial, variacaoTemperatura, dilatacao;

    printf("-=-=-=-=-=-=-=-=- Calculadora de Volumetrica -=-=-=-=-=-=-=-=-\n");

    printf("Informe o coeficiente de dilatacao linear do material: ");
    scanf("%f", &coeficiente);

    printf("\nInforme o volume inical do material em cm cubicos: ");
    scanf("%f", &volumeInicial);

    printf("\nInforme a variacao de temperatura do material em graus Celsius: ");
    scanf("%f", &variacaoTemperatura);

    dilatacao = (coeficiente * 3) * volumeInicial * variacaoTemperatura;

    printf("\nA variacao do volume foi de %5.3f cm cubicos\n", dilatacao);
    printf("\nTotalizando um volume total de %f\n", volumeInicial + dilatacao);
}