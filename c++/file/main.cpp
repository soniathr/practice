#include <iostream>
#include <fstream>
#include <conio.h>
using namespace std;

int main()
{
   char ch;
   ofstream f1("a.dat");  //open file to write sth on it
   if(!f1)
    exit(0);              //was it successful to open?

   cout<<"enter:"<<endl;  //enter text

   do{
    cin.get(ch);
    f1.put(ch);
   } while(ch !='$');

   f1.close();

   cout<<"output:"<<endl;

   ifstream f2("a.dat");
   f2.get(ch);
   while(!f2.eof())
   {
       cout.put(ch);
       f2.get(ch);
   }
   f2.close();

   getch();
}
