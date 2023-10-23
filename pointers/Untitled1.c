#include<stdio.h>
int main(){
    int n;
    int *p;
    p = &n;
    scanf("%d",p);
    printf("%d",*p);
return 0;}
