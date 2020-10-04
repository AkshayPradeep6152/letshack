 
#include <stdio.h>
int main()
{
    double num1,num2,result;
    char operation;   
    printf("------Basic Calculator------\n");
    printf("Enter a number: ");
    scanf("%lf",&num1);
    printf("Enter another number: ");
    scanf("%lf",&num2);
     
    printf("For ADDITION Enter +\nFor SUBTRACTION Enter -\nFor MULTIPLICATION Enter *\nFor DIVISION Enter /\n ");
    scanf(" %c",&operation);
     
    switch(operation)    
    {
        case '+':
            result=num1+num2;
            break;
             
        case '-':
            result=num1-num2;
            break;
         
        case '*':
            result=num1*num2;
            break;
             
        case '/':
            result=(float)num1/(float)num2;
            break;
        default:
            printf("Invalid operation.\n");
    }
 
    printf("The result is: %f\n",result);
    printf("----Thank You----");
    return 0;
}
