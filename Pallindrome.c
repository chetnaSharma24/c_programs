#include<stdio.h>
#include<conio.h>

int main(){
  int n, r, sum=0, t;
  printf("Enter a number");
  scanf("%d", &n);
  
  t=n;
  
  while(n>0){
    r = n%10;
    sum = (10*sum) +r;
    n = n/10;
  }
  
  if( sum==t){
    printf("Pallindrome");
  }
  
  else{
    print("NOT Pallindrome");
  }
  
  return 0;
  }
