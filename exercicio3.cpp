#include <iostream>
int main(){
    
    int num1, num2, num3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);
     
     printf("\n Digite o segundo número: ");
    scanf("%d", &num2);
     
     printf("\n Digite o terceiro número: ");
    scanf("%d", &num3);

    int soma = num1 + num2 + num3;
    printf("Soma: %d + %d + %d = %d\n", num1, num2, num3, soma);

    int divisao = soma / 3;
    
    printf("Divisao: %d / %d = %d\n (Quociente)", num1, num2, divisao);


    return 0;

}






