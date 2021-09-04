#include<stdio.h>

int main(){

  int num, soma, hn;
  hn=0;
  num=1;
  
  while(hn<100){
    soma=num;
    while(soma!=1 && soma!=4 && soma!=9){
      soma=digit(soma);
    }
    if(soma==1){
      printf("%d\n", num);
      hn=hn+1;
    }num++;
  }
  return 0;
}

int digit(int v){
  int res, sum;
  res=0;
  sum=0;
  
  while(v>0){
    res = v%10;
    sum+=(res*res);
    v/=10;
  }
  return sum;
}
