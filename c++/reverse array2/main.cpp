#include <iostream>
#include <conio.h>
using namespace std;

void rev(int [],int );
void print(int [],int );
int main()
{
    const int size=5;
    int a[size]={1,2,3,4,5};
    rev(a,size);
    print(a,size);
    getch();
}
void rev(int a[],int c){
   int temp;
   for(int i=0;i<c/2;i++){
    temp=a[i];
    a[i]=a[c-1-i];
    a[c-1-i]=temp;
   }
}
void print(int a[],int c)
{
    for(int i=0;i<c;i++)
        cout<<a[i]<<" ";
}
