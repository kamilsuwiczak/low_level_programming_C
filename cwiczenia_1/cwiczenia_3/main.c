#include <stdio.h>


int main(){
    unsigned int a;
    printf("Podaj liczbę naturalną: ");
    scanf("%d", &a);
    printf("%d ", a);
    while(a!=1){
        if(a%2==0){
            a=a/2;

        }else{
            a=3*a+1; 
        }
    printf("%d ", a);
    }



    return 0;
}