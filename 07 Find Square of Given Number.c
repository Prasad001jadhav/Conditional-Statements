#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0,square=0;

    printf("\n Enter a Number = ");
    scanf("%d",&no);

    square=no*no;
    printf("\n Square of %d is = %d.",no,square);

    getch();
    return 0;
}
