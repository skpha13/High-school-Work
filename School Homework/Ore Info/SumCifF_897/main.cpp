#include <iostream>

using namespace std;

int sumcif(int a)
{
    int s=0;
    while(a)
    {
        s+=a%10;
        a/=10;
    }
    return s;
}
