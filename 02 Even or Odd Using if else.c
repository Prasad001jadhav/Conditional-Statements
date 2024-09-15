#include<stdio.h>
#include<conio.h>
int main()
{
    int no = 0;

    printf("\n Enter a Number = ");
    scanf("%d",&no);

    if(no == 0)
    {
        printf("\n %d is neutral.",no);
    }
    else if (no % 2 == 0)
    {
        printf("\n %d is even.",no);
    }
    else
    {
        printf("\n %d is odd.",no);
    }
    printf("\n");

    getch();
    return 0;
}
