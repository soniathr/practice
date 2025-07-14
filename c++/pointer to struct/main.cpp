#include <iostream>

using namespace std;

int main()
{
    struct student{
      int id;
      int score;
    };

    struct student x[3]={{1,20},{2,13},{3,14}};
    struct student *p;
    p=x+2;
    cout<<"output:"<<(*p).score;
}
