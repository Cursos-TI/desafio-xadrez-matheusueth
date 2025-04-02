#include <stdio.h>

int main() {

    int torre= 1;
    int bispo= 1;
    int rainha= 1;

    for(int torre= 1; torre<=5; torre++){
        printf("em frente\n");
    }

    while(bispo<=5){
        printf("cima direita\n",bispo);
        bispo++;
    }
do{
    printf("em frente\n", rainha++);
    rainha++;
} 
while(rainha<=5);

    return 0;
}
