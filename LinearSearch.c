#include <stdio.h>
int main()
{
    int arr[30],ele,i,found=0,num;
    printf("Enter the size of array");
    scanf("%d",&num);
    for (i=0;i<num;i++)
    {
        printf("Enter Element : a[%d]",i);
        scanf("%d",&arr[i]);

    }
    printf("\nEnter the element to search");
    scanf("%d",&ele);
    for (i=0;i<num;i++)
    {
        if(arr[i]==ele)
       {
        printf("Element is found in index : %d",i,ele);
        found=1;
        break;
        }
    }
    if (!found)
    printf("Element not found");
    return 0;

    }
    
