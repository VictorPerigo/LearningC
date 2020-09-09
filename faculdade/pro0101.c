#include <stdio.h>

main()
{
    float votos_A, votos_B, votos_C, Votos_Nulo, Votos_Branco;

    printf("Numero de votos do canditado A: ");
    scanf("%d", &votos_A);

    printf("Numero de votos do canditado B: ");
    scanf("%d", &votos_B);

    printf("Numero de votos do canditado C: ");
    scanf("%d", &votos_C);

    printf("Numero de votos nulos: ");
    scanf("%d", &Votos_Nulo);

    printf("Numero de votos em branco: ");
    scanf("%d", &Votos_Branco);

    float votos_validos = votos_A + votos_B + votos_C;
    float votos_invalidos = Votos_Branco + Votos_Nulo;

    printf("O numero total de eleitores foi igual a %.f \n", (votos_validos + votos_invalidos));
    printf("A quantidade de votos validos foi de %.f \n", votos_validos / (votos_validos + votos_invalidos) * 100);
    printf("O cantidato A recebeu %5.2f%% dos votos\n", votos_A / (votos_validos + votos_invalidos) * 100);
    printf("O cantidato B recebeu %5.2f%% dos votos\n", votos_B / (votos_validos + votos_invalidos) * 100);
    printf("O cantidato C recebeu %5.2f%% dos votos\n", votos_C / (votos_validos + votos_invalidos) * 100);
    printf("Votos brancos representaram um total de %5.2f%% dos votos\n", Votos_Branco / (votos_validos + votos_invalidos) * 100);
    printf("Votos nulos representaram um total de %5.2f%% dos votos\n", Votos_Nulo / (votos_validos + votos_invalidos) * 100);
}