#include <time.h>
#include <stdlib.h>
#include <stdio.h>
p=0;
int main(void) {
    int choice,x;
    printf("\n quer jogar: se sim 1, se nao 2 \n");
    scanf("%i",&choice);
    printf("\n pense em um numero de 0 a 2, sua chance de acertar e de 33 por cento:  ");
    scanf("%d",&x);
    if(choice==1){
    srand(time(NULL));
    int r = rand() %3;
    printf("\n Numero sorteado %d", r);
     if(r==x){
        printf("\n\tvoce acertou");
        p++;
            }
     else{
        printf("\n\tvoce errou");
        p--;
        }
        printf("\n\t:seus pontos sao %d",p);
    getchar();
    main();}
    else
    return 0;
}
