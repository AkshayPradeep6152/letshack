# include<stdio.h>
void main()
{
    int ar[100],i,*p,n;
    printf("enter the no.of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",&ar[i]);
    }
    p=ar;
    printf("elements of array are:\n");
    for(i=0;i<n;i++)
    {
        printf("%d \n",*p);
        p++;
    }
}

