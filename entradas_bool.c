#include <stdio.h>
#include <stdbool.h>

bool pedirBooleano(void){
    int temp;
    bool x;
    x = true;
    x = false;
    printf("Es posta?(0 es no y 1 es si)\n");
    scanf("%d",&temp);
    x = temp;
    return x;
}

void imprimeboolenalo (bool x){
    if (x){
        printf("True");
    }
    else{
        printf("False");
    }
}





int main(void){
    imprimeboolenalo(pedirBooleano());
    return 0;
}