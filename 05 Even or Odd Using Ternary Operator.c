#include<stdio.h>
#include<conio.h>
int main ()
{
    int no=0;

    printf("\n Enter a Number = ");
    scanf("%d",&no);

    ((no<=0)?printf("\n invalid input.",no):(no % 2 == 0)?printf("\n %d is even.",no):printf("\n %d is odd.",no));

    printf("\n");

    getch();
    return 0;
}
