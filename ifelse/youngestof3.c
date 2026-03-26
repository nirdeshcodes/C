#include<stdio.h>
int main(){
  int Shyam,Ram,Ajay;
  printf("Enter the ages of Shyam,Ram,Ajay respectively:");
  scanf("%d%d%d",&Shyam,&Ram,&Ajay);
  if(Ram>=Shyam && Ajay>=Shyam){
    printf("Shyam is the youngest");
  }
  else if(Shyam>=Ram && Ajay>=Ram){
    printf("Ram is the youngest");
  }
  else{
    printf("Ajay is the youngest");
  }
}