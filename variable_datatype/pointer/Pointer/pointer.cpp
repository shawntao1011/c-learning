#include <iostream>
using namespace std;
int main()
{   

    int a=0x01020304;
    int *p1=&a;
    char* p2=(char*)&a;
    short *p3=(short*)&a;

    cout<<*p1<<endl;
    cout<<*p2<<endl;
    cout<<*p3<<endl;

    cout<<p1<<endl;
    cout<<endl;
    cout<<p1+1<<endl;
    cout<<p2+1<<endl;
    cout<<p3+1<<endl;

    return 0;
}

