#include <iostream>
#include <conio.h>
#include <iomanip>
#include <string.h>
using namespace std;

struct student{
   char name[20];
   int grade[3];
}s[2];

int main()
{
    strcpy(s[0].name,"ali rezaei");
    strcpy(s[1].name,"sara amini");

    s[0].grade[0]=20;
    s[0].grade[1]=17;
    s[0].grade[2]=18;

    s[1].grade[0]=16;
    s[1].grade[1]=15;
    s[1].grade[2]=19;

    for(int i=0;i<=1;i++)
    {
        cout<<"name:"<<s[i].name<<endl;
        cout<<"grade:"<<endl;
        for(int j=0;j<=2;j++)
            cout<<setw(4)<<s[i].grade[j];

        cout<<endl;
    }
    getch();
}
