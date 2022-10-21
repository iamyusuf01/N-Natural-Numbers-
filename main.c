#include <stdio.h>
void print(int);
int main()
{
  int n;
  printf("Enter a number\n");
  scanf("%d",&n);
  print(n);
}
void print(int n)
{
  if(n>=2)
    print(n-1);
  printf(" %d",n);
}