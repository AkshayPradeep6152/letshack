#include<stdio.h>
void main( )   
{   
  int n, count = 1;   
  float x, average, sum = 0;   
  printf("Enter value of n?");  
  scanf ("%d",&n);   
  while (count <= n)   
     {   
      printf ("Enter %d number?",count);   
      scanf("%f", &x);   
      sum += x;   
      ++count;   
     }   
      average = sum/n;   
      printf("\nThe Average is %f\n", average);   
}  
