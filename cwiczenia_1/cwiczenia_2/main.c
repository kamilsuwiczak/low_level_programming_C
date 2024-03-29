#include <stdio.h>
#include <math.h>

int main(){
    int a, b, c;
    printf("Podaj współczynnik a: ");
    scanf("%d", &a);
    printf("Podaj współczynnik b: ");
    scanf("%d", &b);
    printf("Podaj współczynnik c: ");
    scanf("%d", &c);

    float delta, x1, x2;
    delta = b*b-4*a*c;
    if(delta<0){
        printf("Brak rozwiązań");
    }else if (delta==0){
        x1= (-b)/(2*a);
        printf("Jedno rozwiązanie równania ", "%f", &x1);
        
    }else{
        
        x1=(-b-sqrt(delta))/(2*a);
        x2=(-b+sqrt(delta))/(2*a);
        printf("Dwa rozwiązania równania ");
        printf("%f, %f", &x1, &x2);
    }

    return 0;
}