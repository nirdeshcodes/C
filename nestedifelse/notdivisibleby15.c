#include<stdio.h>
int main(){
  int n;
  printf("enter any number:");
  scanf("%d",&n);
  
    if((n%5==0 || n%3==0) && n%15!=0)//&& have more preference than || operator.
    {
      
        printf("the number is divisible by 5 or 3 but not fifteen");


      }
      else{
        printf("the number is not matching the required condition");
      }

    
    return 0;
  
      }