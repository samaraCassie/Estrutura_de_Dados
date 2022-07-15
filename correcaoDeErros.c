#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// ERRO A corrigir: Limitar quantia de agarismos do Id (8 algarismos)

int AnaliseDado (int x)
{
    int chk;
    char tmp[20];

    while(x){
        scanf("%d", &x);
        if(!fgets(tmp, sizeof tmp, stdin));
        if (sscanf(tmp, "%d", &x)!=1);
        chk=sscanf(tmp, "%d", &x);
        if (chk==0){
            printf("Insira um numero inteiro\n");
        }
        else if (chk==1){
            break;
        }
        else if (chk==EOF){
            break;
        }
    }
    return x;
}