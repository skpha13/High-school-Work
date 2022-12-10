#include <iostream>
#include <cmath>

using namespace std;

int n;

bool echilibrat(int n)
{
    int sp=0,simp=0,i,k;
    k=ceil(log10(n));
    for(i=0;i<k;i++,n/=10)
        if(i%2==0) sp+=n%10;
        else simp+=n%10;
    if(sp%2==0 && simp%2==1) return 1;
    return 0;
}

int echilibrat2(int n)
{
    int sp=0,simp=0;
    while(n)
    {
        sp+=n%10; n/=10;
        simp+=n%10; n/=10;
    }
    if(sp%2==0 && simp%2==1) return 1;
    return 0;
}

int main()
{
    cout<<echilibrat2(11211);
    return 0;
}