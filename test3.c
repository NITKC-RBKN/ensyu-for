#include <stdio.h>

int main(void){
  int i;
  int j;

  for(i=0;i<10;i++){
    for(j=0;j<10;j++){
      printf("%d x %d = %d\n",i,j,i*j);
    }
  }
}

//1,2,3,4行目の出力結果を求めよ
//全部で何行出力されるかを求めよ
