#include <iostream>

using namespace std;

void oglindit(int n,int &ogl)
{
    ogl=0;
    while(n)
    {
        ogl=ogl*10+n%10;
        n/=10;
    }
}

int main()
{
    int n,ogl;
    cin>>n;
    oglindit(n,ogl);
    cout<<ogl;
    return 0;
}
