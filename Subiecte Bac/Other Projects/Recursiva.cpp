#include <iostream>

using namespace std;

int n,a=1;

void g(int n)
{
    int i;
    if(n>0)
    for(i=n;i>1;i--)
    {
        cout<<n<<" "<<i<<endl;
        g(n-2);
    }
}

void f(int &a)
{
    a++;
}

int main()
{
    //g(4);
    cout<<a<<endl;
    f(a);
    cout<<a;
    return 0;
}