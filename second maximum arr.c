#include<stdio.h>
#include<conio.h>
#define size 4
int main()
{
  int arr[size]={}, i, max, smax, flag=0;
  
  printf("\n enter %d elements of array\n",size);

  for(i=0 ; i < size ; i++) 
  {
    printf(" enter %d element=", i);
    scanf("%d",&arr[i]);
  }
  
  printf("\n display all elements:");
  for(i=0 ;i < size ; i++)
  {
    if(i==0 || arr[i]>max)
    {
      max=arr[i];
      
    }
    for(i=0 ; i<size ; i++)
    {
      if(arr[i]==max)
      {
       continue ;
      }
      if(flag==0 || arr[i] > max)
      {
         smax=arr[i];
         flag=1;
      
      }
    
    }
  
  }
  
   printf("\n The maximum number of an given elements is %d ",max);
   printf("\n th second maximum number is %d",smax);
   return 0;
}