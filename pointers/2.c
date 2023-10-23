#include<stdio.h>
int main(){
    int n,m;
    int *p1,*p2;
    p1 = &n;
    p2 = &m;
    scanf("%d %d",p1,p2);
    printf("%d",*p1+*p2);
return 0;}
