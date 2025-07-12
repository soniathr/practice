#include <iostream>
#include <conio.h>
using namespace std;

main(){
   int a[6]={2,5,7,8,14,2};

   for( int i=0; i<=5; i++)
    if(a[i]%2==0)
       cout<<a[i]<<endl;
   cout<<endl<<endl;
   for(int i=0;i<=5;i++)
    if(i%2==0){
       cout<<a[i]<<endl;
    }
getch();
}
