#include<stdio.h>
#include<conio.h>
#define size 4
int main()
{
  int num[size]={}, i, max;
  
  printf("\n enter %d elements of array\n",size);

  for(i=0 ; i < size ; i++) 
  {
    printf(" enter %d element=", i);
    scanf("%d",&num[i]);
  }
  
  printf("\n display all elements:");
  for(i=0 ;i < size ; i++)
  {
    if(i==0 || num[i]>max)
    {
      max=num[i];
      
    }
  
  }
  
   printf("\n The maximum number of an given elements is %d ",max);
   return 0;
}