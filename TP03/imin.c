#include<stdio.h>

int
imin(int*T,int n){
  int x=0;
  for (int i=1;i<n;i++){
    if (T[i]<T[x]){
      x=i;
    }
  }
  return x;
}

float T[4]={5,-1,2,0};
int r=imin(T,4);

void tri(int*t;int n){
  if (n<=1){
    return;
  }
  int i=imin(t,n);
  int tmp=t[i];
  t[i]=t[0];
  t[0]=tmp;
  tri(t+1;x-1);
}

int main(){
  int T[10]={1,2,5,7,10,9,8,4,6,3};
  tri(T,10);
  return 0;
}


graph display t[0]@10
