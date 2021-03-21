#include <stdio.h>
int main()
{
char input;
printf("Please give an input: ");
input=getchar();

if('a' <= input && input <= 'z'){
    printf("It's lowercase.\n");
}
else if('A' <= input && input <= 'Z'){
    printf("It's uppercase.\n");
}
return 0;
}
