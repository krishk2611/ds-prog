#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10];
    int largest,i;
     printf("Enter 10 integers for array A:\n");
    for(i =0; i <=9; i++) {
        scanf("%d", &a[i]);
    }
largest=a[0];
for(i=1;i<=9;i++)
 {
        if(a[i]>largest)
        {
            largest=a[i];
        }
    }
   printf("largest value is:%d",largest);

    getch();
}
