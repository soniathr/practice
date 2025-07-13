#include <iostream>
#include <conio.h>
#include <math.h>
using namespace std;


//f(x,y)=x+y


int f(int a, int b);

int main()
  {
  int x,y;
  cin>>x>>y;
  cout<<f(x,y);
  getch();
}

int f(int a, int b){
return a+b;

}
