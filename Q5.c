#include <stdio.h>
int main(){
    int num1, num2;
    printf("Enter a number:");
    scanf("%d", &num1);
    printf("Enter a number:");
    scanf("%d", &num2);
    if (num1>num2){
        printf("%d",num1);
    }
    else{
        printf("%d",num2);
    }
    return 0;
}