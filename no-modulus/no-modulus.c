#include <stdio.h>

int main()
{
int a, b, c, d, remain, beat, beat2;
    printf("Enter the Divisible here: ");
    scanf("%d",&a);
    printf("Enter the Divisor here: ");
    scanf("%d",&b);
    printf("\n\n");
//values are starting from here!!!
    c = a/b;
    d = b*c;
    remain = a-d;
    printf("The remainder is: %d",remain);
    printf("\n\n");
    if(remain!=0){
    beat = a-remain;
    beat2 = beat+b;
    printf("If the divisible was %d or %d, the divisor would beat that completely!",beat, beat2);
    printf("\n\n");
    return 0;}
}
