#include <iostream>
#include <conio.h>
using namespace std;

void printarray(int [],int );
int main()
{
   int a[3]={7,5,8};
   cout<<"array a:";
   printarray(a,3);
   getch();
}
void printarray(int a[], int count)
{
    for(int i=0; i<count;i++)
        cout<<a[i]<<'\t';
}
