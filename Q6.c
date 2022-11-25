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
        strcpy(fname, " ");
        strcpy (fname,sname);
        printf("%s", fname);
        printf("Length of the string:%d", strlen);
    }
    else{
        strcat(fname, " ");
        strcat(fname,sname);
        strlen(fname);
        printf("%s", fname);
        printf("Length of the string:%d", strlen);
    }
    return 0;
}
