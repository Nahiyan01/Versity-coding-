#include<stdio.h>
int main(){
    int n;
    int *p1;
    p1 = &n;
    int fact = 1;
    scanf("%d",p1);
    for(int i=1;i<=*p1;i++){
        fact = fact * i;
    }
    printf("%d",fact);
return 0;}



