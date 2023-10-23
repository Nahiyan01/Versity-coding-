#include<stdio.h>
struct cricketer
{
    char name[25];
    int runs,wickets;
};

int main(){
   struct cricketer player = { "Shakib", 60, 3 };
    printf("name of the player");
    puts(player.name);
    printf("\nthe run he made:%d\n",player.runs);
    printf("the number of wickets he took :%d",player.wickets);
}
