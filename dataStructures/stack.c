// stack is a datatype which follow LAST IN FIRST OUT(LIFO)
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main()
{
    int i,a[100],n,top,x,y,c1,c2;
    printf("enter no of elements in stack:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        printf("\na[%d]=",i);
        scanf("%d",&a[i]);
    }
        printf("\nTop element of Stack is %d",a[n]); 
        printf("Stack elements are:");
        for(i=0;i<n;i++)
        {
            printf("a[%d]=%d\n",i,a[i]);
        }
    printf("Do you want to do insertion(press 1 for Yes and 0 for No):");
    scanf("%d",&c1);
    if(c1==1)
    {   
        if(n==99)
        {
            printf("Stack is full, can't insert but you can perform insertion");
        }
        else
        {
            printf("\nDoing insertion");
            printf("\nEnter the element you want to enter:");
            scanf("%d", &x);
            a[n]=x;
            top=a[n];
            printf("\nTop element of Stack is %d",top); 
        }
        printf("\nno of elements in stack after insertion: %d",n+1);
        printf("\n Newly added element: %d",a[n]);
        printf("\nStack elements are:");
        for(i=0;i<=n;i++)
        {
            printf("\n%d\n",a[i]);
        }
    }
    printf("Do you want to do insertion(press 1 for Yes and 0 for No):");
    scanf("%d",&c2);
    if(c2==1)
    {
        printf("\nDoing deletion");
        if(a[0]==0)
        {
            printf("\nNothing to delete,Stack is empty");
        }
        else
        {
            printf("\nPlease check which element you want to delete");
            printf("\nElement:");
            scanf("%d",&y);
            if(a[0]==top)
            {
                printf("\nStack is empty");
            }
            else
            {
                for(i=1;i<=n;i++)
                {
                    if(a[i]==y)
                    {
                        top=a[i-1];
                        for(int j=i;j<n;j++)
                        {
                            a[j]==0;
                        }
                        printf("\nNo of elements in stack after deletion: %d",i-1);
                        printf("\nTop element of Stack is %d",top); 
                        printf("\nStack elements are:");
                        for(i=0;i<=n;i++)
                        {
                            printf("\n%d\n",a[i]);
                        }
                        break;
                    }
                }
            }   
        
        }
    }   
    // printf("\nStack elements are:");
    // for(i=0;i<=n;i++)
    // {
    //     printf("\n%d\n",a[i]);
    // }
    return 0;
}