#include<stdio.h>
int main(){
  double x1;
  printf("Enter the value of x1:");
  scanf("%lf",&x1);
  double x2;
  printf("Enter the value of x2:");
  scanf("%lf",&x2);
  double y1;
  printf("Enter the value of y1:");
  scanf("%lf",&y1);
  double y2;
  printf("Enter the value of y2:");
  scanf("%lf",&y2);
  double x3;
  printf("Enter the value of x3:");
  scanf("%lf",&x3);
  double y3;
  printf("Enter the value of y3:");
  scanf("%lf",&y3);
  
  double m1=(y2-y1)/(x2-x1);
  double m2=(y3-y2)/(x3-x2);
  if(m1 ==   m2){
    printf("All the points are on one straight line");
  }
    else{
      printf("All the points are not on one straight line");
  }
  return 0;

  
}