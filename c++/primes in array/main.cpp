#include <iostream>
using namespace std;
// find prime numbers btw 10 to 20
//11 13 17 19
int main()
{
  int i,j;

  for (i=10;i<20;i++){
        int count=0;
     for ( j=2;j<i;j++){
        if(i%j==0){
          count++;
           break;
        }
     }
   if(count==0){
         cout<<i<<" ";
     }
return 0;
}
}
