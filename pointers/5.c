#include<stdio.h>
int main(){
    double n,m;
    double*p1=&n,*p2=&m;
    scanf("%lf %lf",p1,p2);
    if(*p1>*p2) printf("%lf",*p1);
    else printf("%lf",*p2);
return 0;}

