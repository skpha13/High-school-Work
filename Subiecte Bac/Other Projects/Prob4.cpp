#include <iostream>

using namespace std;

int main()
{
    int u,v,x=1,y=2,z=1;
    u=(x==y) || (y==z);
    v=((x!=y) && (y!=z));
    cout<<u<<" "<<v<<endl;
    return 0;
}