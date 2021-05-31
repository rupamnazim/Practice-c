#include <stdio.h>
int main()
{
    int num[5] = {1,2,3,4,5};
    int i;
    for(i=4;i<5;i=i+2){
    printf("These numbers are %d\n",num[i]);}
    printf("%d",i);
    return 0;
}
