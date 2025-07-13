#include <iostream>
#include <conio.h>
using namespace std;

int f(int x); //portotype
int main()
{
  int a;
  int b;
  b=f(a);
  cout<<b;
  getch();
}
int f(int x){
  return 2*x;
  }

