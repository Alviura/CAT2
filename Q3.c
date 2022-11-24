#include<stdio.h>
int main(){
    int a = 5, b = 4;
    float x;
    x=(float)b/a; //Explicitly converts the result of the division to float
    printf("%f\n", x);
    
    x=b/a;
    printf("%f", x);
    return 0;
}