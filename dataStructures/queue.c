//QUEUE is a datatype which follow FIRST IN FIRST OUT
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,j,x,y,n;
    int a[500];
    printf("Enter number of element in your queue:");
    scanf("%d", &n);
    printf("\n Enter elements in your Queue:\n ");
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
    printf("\nElement at top in your queue is %d",a[0]);
    printf("\nDoing insertion...");

    printf("\nEnter the element you want to enter:");
        scanf("%d", &x);

        a[n]=x;
        printf("\nTop element of Queue is %d",a[1]); 
    printf("\nNo of elements in Queue after insertion: %d",n+1);
    printf("\nNewly added element: %d",a[n]);
    printf("\nQUeue elements are:");
    for(i=0;i<=n;i++)
    {
        printf("\n%d",a[i]);
    }
    printf("\nDoing Deletion...");

    printf("\nEnter Element you want to delete:");
    scanf("%d",&y);
    printf("\nAfter deletion");
    if(a[0]==y)
    {
        printf("\nStack is now empty");
    }
    for(i=1;i<=n;i++)
    {
        if(a[i]==1)
        {
            for(j=i;j<=n;j++)
            {
                a[j]=0;
            }
        }
        printf("\na[%d]=%d",i,a[i]);
    }

    return 0;
}