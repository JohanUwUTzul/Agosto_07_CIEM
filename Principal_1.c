#include <stdio.h>
int main(){
    int num1, num2;
    float res1, res2, res3, res4;
    printf("Ingrese el primer numero: ");
    scanf("%d",&num1);
    printf("Ingrese el segundo numero: ");
    scanf("%d",&num2);
    res1=num1+num2;
    res2=num1-num2;
    res3=num1*num2;
    res4=num1/num2;
    printf("El resultado de la suma es: %.0f\n",res1);
    printf("El resultado de la resta es: %.0f\n",res2);
    printf("El resultado de la multiplicacion es: %.0f\n",res3);
    printf("El resultado de la division es: %.0f\n",res4);
    return 0;
}