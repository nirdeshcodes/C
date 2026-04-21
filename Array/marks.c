#include<stdio.h>
int main(){
  int marks[10]={95,90,5,80,75,70,15,30,25,20};
  for(int i=0;i<10;i++){
    if (marks[i]<35){
      printf("roll no. is %d\n",i);
    }

  }
  return 0;
}