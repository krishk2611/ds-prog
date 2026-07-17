//insert an element into the array at user defined position.
#include<stdio.h>
#include<conio.h>
void main()
{
    int arr[10],location,i,value;
    printf("\n enter the value of array:");
    for(i=0;i<=9;i++)
    {
        scanf("%d",&arr[i]);

    }
    printf("\n enter the location:");
    scanf("%d",&location);
    if(location-1 > 9)
    {
       printf("\n location not found");
    }
    else{

       for(i=location;i<=9;i++)
       {
        arr[i]=arr[i+1];

       }
    }
       printf("\n array is: ");
    for(i=0;i<=8;i++)
    {
        printf("%d ",arr[i]);
    }
}
