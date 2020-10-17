# include<stdio.h>
# include<stdlib.h>
# include<string.h>
void main()
{
    int n1,n2,j;
    char *p1,*p2;
    printf("enter the size of first string:\n");
    scanf("%d",&n1);
    p1=(char*)malloc(n1*sizeof(char));
    if(p1==NULL)
    {
       printf("error");
       exit(0);
    }   
    printf("enter the size of second string:\n");
    scanf("%d",&n2);
    p2=(char*)malloc(n2*sizeof(char));
    if(p2==NULL)
    {
      printf("error");
      exit(0);
    }  
    printf("\nenter first string:");
    fflush(stdin);
    gets(p1);
    printf("\nenter second string:");
    gets(p2);
    j=strcmp(p1,p2);
    if(j==0)
    printf("\nstrings are same");
    else
    printf("\n strings are different");
}
