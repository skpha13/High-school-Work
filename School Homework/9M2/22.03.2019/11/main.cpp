#include <iostream>

using namespace std;

int main()
{
  int v[100],n,i,a[100],d=0;
  cout<<"n=";cin>>n;
  for(i=1;i<=n;i++){
    cout<<"a["<<i<<"]=";cin>>a[i];
  }
  for(i=1;i<=n;i++){
    if(a[i]>0){
        d++;
        a[d]=v[i];
    }
  }
  cout<<"Vectorul cu elementele pozitive este: "<<endl;
  for (i=1;i<=n;i++){
    cout<<a[i]<<" ";
  }
  return 0;
}
