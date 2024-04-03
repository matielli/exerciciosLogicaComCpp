#include <iostream>

int main(){
    int num;
    printf("Digite um numero \n");
    scanf("%d", &num);
    int res;
    res = (num > 0) && (num %2 == 0);
    printf("%d \n", res);
    return 0;

}
