include <stdio.h>
#include <stdlib.h>

int main() {
    int x,y;
    printf("Digite um valor inteiro: ");
    scanf("%d",&x);
    if(x>0){
        printf("x é positivo!\n");
        
    }else{
        if(x<0){
            printf("x é zero!\n");
        }
    }
    printf("Fim do programa!\n");
    return 0;
}