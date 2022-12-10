#include <iostream>
#include <cstring>

using namespace std;

char v[21][21];
int n,k,ok,i;

int main()
{
    cin>>n>>k;
    cin.get();
    for(i=0;i<n;i++)
        cin>>v[i];
    for(i=0;i<n;i++)
        if(i!=k-1 && strcmp(v[i]+strlen(v[i])-strlen(v[k-1]),v[k-1])==0)
        {
            cout<<v[i]<<" ";
            ok=1;
        }
    if(!ok)cout<<"nu exista";
    return 0;
}