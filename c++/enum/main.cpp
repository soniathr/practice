#include <iostream>
#include <conio.h>

using namespace std;

typedef enum {zero,one,two,three,four} a;
a x;

void f(a);
a    g();

int main()
{
    x=two;
    f(x);
    cout<<g();
    getch();
}

void f(a v)
{
    x=v;
}
a g()
{
    return x;
}
