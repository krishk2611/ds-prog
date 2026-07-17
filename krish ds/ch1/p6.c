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

        printf("\n enter the value");
         scanf("%d",&value);
         arr[location-1]=value;
    }
       printf("\n array is: ");
    for(i=0;i<=9;i++)
    {
        printf("%d ",arr[i]);
    }
}
