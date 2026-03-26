#include<stdio.h>
int main(){
  int a,b,c;
  printf("enter the values of 1st number");
  scanf("%d",&a);
  printf("enter the 2nd number");
  scanf("%d",&b);
  printf("enter the 3rd number");
  scanf("%d",&c);
  if(a>b) // b is out of race
  {
    if( a>c)
      printf("%d is the greatest number",a);
     else
      printf("%d is the greatest",c);
      
     
    }
    else{
      if(b>c)
      printf("%d is greatest");
      else //c>b
      printf("%d is greatest",c);
    }
    return 0;
  }
