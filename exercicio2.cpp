#include <iostream>
int main(){
    int a;
    
    printf("Digite um numero (0 ou 1): ");
    scanf("%d", &a);
   
    bool isTrue = true;

    printf("\nOperador OR (||):\n");
    printf("%d || %d = %d\n", a, 2, a % 2);

    int resto = a % 2;

    return true;
}

