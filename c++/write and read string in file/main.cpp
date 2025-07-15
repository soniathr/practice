#include <iostream>
#include <conio.h>
#include <fstream>
using namespace std;

int main()
{
    char s[10];

    ofstream f1("a");
    if (!f1)  exit(0);
    cout<<"enter:"<<endl;
    while(cin>>s)
        f1<<s<<' ';
    f1.close();

    cout<<"output:"<<endl;
    ifstream f2("a");
    f2>>s;
    while(!f2.eof())
    {
        cout<<s<<endl;
        f2>>s;
    }
    f2.close();
    getch();
}
