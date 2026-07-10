//TAKE A AND B AS 3 SIZE AND C AS 6 AND THEN MERGE B AND A INTO C

#include<stdio.h>
#include<conio.h>

void main()
{
    int a[3], b[3], c[6];
    int i;

    printf("enter the value in a:");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&a[i]);
    }

    printf("enter the value in b:");
    for(i=0;i<=2;i++)
    {
        scanf("%d",&b[i]);
    }

    for (i=0;i<=2;i++)
    {
        c[i] = a[i];
    }


    for (i=0;i<=2;i++)
    {
        c[i+3] = b[i];
    }
    printf("The values in c are:");
    for(i=0;i<=5;i++)
    {
        printf("%d ",c[i]);
    }

    getch();
}
