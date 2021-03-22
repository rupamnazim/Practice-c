#include<stdio.h>
int main()
{
    char el;
    printf("Please write any letter: ");
    el=getchar();
    if(el == 'a' || el == 'e' || el == 'i' || el == 'o' || el == 'u'){
        printf("%c is a lowercase vowel.", el);
    }
    else if(el == 'A'||el == 'E'||el == 'I'||el == 'O'||el == 'U'){
        printf("%c is a uppercase vowel.", el);
    }

    return 0;
}
