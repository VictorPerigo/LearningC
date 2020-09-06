#include <stdio.h>

main(){
    //uso de short inclui %hd, uso de long inclui %ld
    short idade;
    int montante;
    long n_conta;

    printf("qual a idade : "); scanf("%hd",&idade);
    printf("qual o montante depositado: ");scanf("%d",&montante);
    printf("qual o numero da conta: "); scanf("%ld",&n_conta);

    printf("uma pessoa de %hd anos depositou $%d na conta %ld\n",idade,montante,n_conta);

}