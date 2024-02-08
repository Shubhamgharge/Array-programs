#include<stdio.h>
#include<conio.h>
#define size 4
int main()
{
  int arr[size]={}, i, min;
  
  printf("\n enter %d elements of array\n",size);

  for(i=0 ; i < size ; i++) 
  {
    printf(" enter %d element=", i);
    scanf("%d",&arr[i]);
  }
  
  printf("\n display all elements:");
  for(i=0 ;i < size ; i++)
  {
    if(i==0 || arr[i]<min)
    {
      min=arr[i];
      
    }
  
  }
  
   printf("\n The minimum number of an given elements is %d ",min);
   return 0;
}