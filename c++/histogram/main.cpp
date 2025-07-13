#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
//HISTOGRAM
main()
{
    int a[5]={4,3,20,9,13};
    cout<<"element"<<setw(13)<<"value"<<setw(20)<<"histogram"<<endl;

    for( int i=0;i<=4;i++)
    {
        cout<<setw(7)<<i<<setw(14)<<a[i]<<setw(15);
            for(int j=0; j<a[i];j++)
                cout<<'*';

        cout<<endl;
    }

}
