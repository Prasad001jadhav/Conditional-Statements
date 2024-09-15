#include<stdio.h>
#include<conio.h>
int main()
{
    int no=0;

    printf("\n Enter a positive number to cheak whether is even  or odd = ");
    scanf("%d",&no);

    if (no<=0)
    {
        printf("\n invalid input.");
    }
    (no%2 == 0)?printf("\n %d iS even.",no):printf("\n %d is odd.",no);

    printf("\n");

    getch();
    return 0;
}
