#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;
    char  d= '²';
     printf("Enter the value of a: "); scanf("%d",&a);
     printf("Enter the value of b: "); scanf("%d",&b);
        printf("(a+b)= %d",a+b); printf("\n");
        printf("(a+b) %c= %d",d,(a+b)*(a+b)); printf("\n");
        printf("a²-b²= %d",(a+b)*(a-b));
    return 0;
}