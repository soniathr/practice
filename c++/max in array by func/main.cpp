#include <iostream>
#include <conio.h>
using namespace std;

int findmax (int [], int );
int main()
{
    int a[10];
    int i=0;
    do {
        cout<<"a["<<i<<"]:";
        cin>>a[i];
    }while(a[i++]!=0 && i<10);
    --i;

    cout<<"max="<<findmax(a,i);
    getch();
}
int findmax (int a[], int c)
{
    int max=a[0];
    for(int j=1; j<c; j++)
        if (a[j]>max)
            max=a[j];
    return max;
}
