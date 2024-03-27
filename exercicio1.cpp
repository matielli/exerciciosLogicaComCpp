#include <iostream>

int main(){
     int numero1;
    int numero2;
   
    printf("Digite um número: ");
    scanf("%d", &numero1);
    
   printf("\n Digite outro numero: ");
   scanf("%d", &numero2);
   
    int soma = numero1 + numero2;
    
    printf("resultado: %d + %d = %d\n", numero1, numero2, soma);

   return 0;
}