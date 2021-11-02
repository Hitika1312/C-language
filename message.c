//Print message n times
#include<stdio.h>
int main()
{
    int n , i=1;
    printf("Enter the number of lines you want to print: ");
    scanf("%d" ,&n);
    while(i<=n)
    {
        printf("\n Hello to the person reading this messages %d times", n);
        i++;
    }
    return 0;
}
