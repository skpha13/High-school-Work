#include <iostream>

using namespace std;

void test(int a,float b)
{
    a=5;
    b=10.2;
}

int main()
{
    int a=10;
    float b=5.3;
    test(a,b);
    cout<<a<<" "<<b;
    return 0;
}
