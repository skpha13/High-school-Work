#include <iostream>
#include <cmath>

using namespace std;

int x,y;

void patrate(int x,int y)
{
    int i,s=0,k=0;
    for(i=x;i<=y;i++)
        if((int)sqrt(i)==sqrt(i))
            s+=i,k++;
    for(i=x;i<=y;i++)
        if((int)sqrt(i)==sqrt(i))
            if(k>=2)
                cout<<i<<"+",k--;
            else
                cout<<i<<"=";
    cout<<s;
}

int main()
{
    cin>>x>>y;
    patrate(x,y);
    return 0;
}