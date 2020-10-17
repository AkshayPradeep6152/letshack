# include<stdio.h>
struct bill
{
    float previous;
    float present;
    float amount;
    char address[100]; 
};
void main()
{
    struct bill x;
    printf("cost per unit=5.9Rs\n");
    printf("enter address:\n");
    scanf("%[^\n]s",x.address);
    printf("enter units consumed prevoiusly:");
    scanf("%f",&x.previous);
    printf("\nunits consumed presently:");
    scanf("%f",&x.present);
    x.amount=(x.previous-x.present)*5.9;
    printf("\n\tBILL AMOUNT\n");
    printf("\nADDRESS=%s",x.address);
    printf("\namount=%f",x.amount);
}
