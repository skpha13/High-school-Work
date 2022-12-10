#include <iostream>

using namespace std;

int n;

int cmmnr(int n)
{
    int i,v[10];
    for(i=0;i<=10;i++)
        v[i]=0;
    while(n)
    {
        v[n%10]++;
        n/=10;
    }
    n=0;
    for(i=1;i<10;i++)
        while(v[i])
        {
            n=n*10+i;
            while(v[0])
            {
                n=n*10+0;
                v[0]--;
            }
            v[i]--;
        }
    return n;
}

int main()
{
    int n;
    cin>>n;
    cout<<cmmnr(n);
    return 0;
}
