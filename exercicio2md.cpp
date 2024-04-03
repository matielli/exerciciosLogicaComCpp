#include <iostream>
int main(){

    int num1, num2;

    printf("Digite um num1 \n");
    scanf("%d\n");
    printf("Digite outro num2 \n");
    scanf("%d\n");
    
    printf("%d %d = %d\n", num1, num2, num1 == num2);
    printf("%d %d = %d\n", num1, num2, num1 < num2);
    printf("%d %d = %d\n", num1, num2, num1 > num2);

    return 0;

}

