#include<stdio.h>

int Addition(int No1,int No2)
{
    int Ans =0;
    Ans =No1+No2;
    return 0;
}
int main()
{
  int Ret=0,A=11,B=10;
  
  Ret=Addition(A,B);

  printf("Addition is\n",Ret);
  
  return 0;
}
