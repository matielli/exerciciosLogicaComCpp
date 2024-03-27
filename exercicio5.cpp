#include <iostream>

int main(){
    int a;

    printf("Digite a temperatura: ");
    scanf("%d", &a);

    int f = (a * 9/5) + 32;

    printf("Resultado: %d\n", f );
    
    return 0;

}



