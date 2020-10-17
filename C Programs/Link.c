# include<stdio.h>
struct node{
 int mark;
 struct node*link;
}std[50],*x;
void main()
{
    int i;
    printf("enter marks:");
    for(i=0;i<50;i++)
    {
        std[i].link=NULL;
        scanf("%d",&std[i].mark);
    }
    for(i=0;i<49;i++)
    {
        std[i].link=&std[i+1];
    }
    std[49].link=NULL;
    x=&std[0];
    while(x!=NULL)
    {
        printf("%d",x->mark);
        x=x->link;
    }

}
