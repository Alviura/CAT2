#include<stdio.h>
#include<string.h>
int main(){
    char fname [20];
    char sname [20];
    printf("Enter first name:");
    scanf("%s", fname);
    printf("Enter second name:");
    scanf("%s", sname);
    if (fname == sname){
        strcpy (fname,sname);
        printf("%s", fname);
    }
    else{
        strcat(fname,sname);
        printf("%s", fname);
    }
    return 0;
}
