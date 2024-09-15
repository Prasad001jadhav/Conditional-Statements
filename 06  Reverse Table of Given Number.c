#include<stdio.h>
#include<conio.h>
int main()
{
    int i=10,iNo=0;

    printf("\n Enter a Number = ");
    scanf("%d",&iNo);

    if(iNo<=0)
    {
        printf("\n Invalid Input");
    }
    else
        while(i>=1)
    {
        printf("\n %d",iNo*i);
        i--;
    }
    printf("\n");

    getch();
    return 0;
}
