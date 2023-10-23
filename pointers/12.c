#include<stdio.h>
int call(int *a,int *b,int *c){
int temp = *a;
*a = *b;
*b = *c;
*c = temp;
printf("a is :%d\n",*a);
printf("a is :%d\n",*b);
printf("a is :%d\n",*c);
}
int main(){
      int x,y,z;
      int *a = &x,*b = &y,*c = &z;
      scanf("%d %d %d",&x,&y,&z);
      printf("the value of a is :%d",x);
      printf("the value of b is :%d",y);
      printf("the value of b is :%d",z);
      call(x,y,z);
return 0;}
