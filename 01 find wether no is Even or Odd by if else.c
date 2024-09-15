
#include<stdio.h>
#include<conio.h>
int main()
{
    int n = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&n);

    if(n%2 == 0)
    {
        printf("\n Your no %d is even.",n);
    }
    else
    {
        printf("\n Your no %d is odd.",n);
    }

    printf("\n ");

    getch();
    return 0;
}
