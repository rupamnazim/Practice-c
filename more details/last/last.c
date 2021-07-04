// Form here I am writing my codes. please make du'a for me that may Allah make me successful. today is 3/20/2021.

#include <stdio.h>
int main()
{
    int a, b, anb, dif;
    char sign;
    printf("Enter your father's age here: "); scanf("%d",&b);
    printf("Please enter your mother's age here: "); scanf("%d",&a);
    printf("\n\n");
    anb=a+b; sign='+';    printf("Their age number's sum is %d %c %d : %d\n", a, sign, b, anb);
if(a>b){anb=a-b; sign='-';printf("Their age number's subtraction is %d %c %d : %d\n", a, sign, b, anb);}
else{anb=b-a; sign='-';   printf("Their age number's subtraction is %d %c %d : %d\n", b, sign, a, anb);}
    anb=a*b; sign='*';    printf("Their age number's multipication is %d %c %d : %d\n", a, sign, b, anb);
    anb=a/b; sign='/';    printf("Their age number's division is %d %c %d : %d\n", a, sign, b, anb);
        printf("\n\n");
if(a==b){printf("Same age.");}
else if(a < b){printf("Your father is elder than your mother.");}
else{printf("Your father is younger than your mother.");}
 printf("\n");
//Value of dif is here.
   dif=a-b;
if(dif > 10, dif < -10){printf("Too much difference between their age!");}
else{printf("not so much difference between their age!");}
 printf("\n");
if(b%2==0){printf("Your father's age number is even");}
else{printf("Your father's age number is odd");}
 printf("\n");
if(a%2==0){printf("Your mother's age number is even");}
else{printf("Your mother's age number is odd");}

printf("\n\n");
return 0;
}


