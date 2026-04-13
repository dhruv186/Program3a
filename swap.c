#include<stdio.h>
int main(){
  int a = 5, b = 10, temp;
  printf("Before swap:\nA : %d\nB : %d", a, b);
  temp = a;
  a = b;
  b = temp;
  printf("After swap:\nA : %d\nB : %d", a, b);
}
