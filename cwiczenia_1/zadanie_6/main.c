#include <stdio.h>

int main(){
    unsigned long int n;
    printf("Podaj liczbę n: ");
    scanf("%d", &n);
    int a;
    while(a>0){
        if (a%10==1){
            a++;
            
        }
    a=a/10;
    }
    printf("wynik: %d", a);


    return 0;
}