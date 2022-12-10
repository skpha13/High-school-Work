#include <iostream>

using namespace std;

int nrcifpare(int n)
{
    if(!n)return 0;
    else
        if((n%10)%2==0)
            return 1+nrcifpare(n/10);
        else
            return nrcifpare(n/10);
}

int nrcifimp(int n)
{
    if(!n)return 0;
    else
        if((n%10)%2!=0)
            return 1+nrcifimp(n/10);
        else
            return nrcifimp(n/10);
}

int cifmax(int n)
{
    if(!n)return 0;
    else
        return max(n%10,cifmax(n/10));
}

void cifinv(int n)
{
    if(n>9)cifinv(n/10);
    cout<<n%10;
}

int main()
{
    int n;
    cin>>n;
    cout<<"1) "<<nrcifpare(n);
    cout<<endl<<"2) "<<nrcifimp(n);
    cout<<endl<<"3) "<<cifmax(n)<<endl<<"4) ";
    cifinv(n);
    return 0;
}
