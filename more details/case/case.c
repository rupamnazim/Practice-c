#include <stdio.h>
int main()
{
char input;
printf("Please give an input: ");
input=getchar();

if('a' <= input){
    printf("It's lowercase.\n");
}
else if('A' <= input){
    printf("It's uppercase.\n");
}
return 0;
}
