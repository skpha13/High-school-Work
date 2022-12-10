#include <iostream>

using namespace std;

struct elev{char nume[20];
            char liceu[20];
            float medie;
            };

elev ve[100];
int n,i,j,x,s=0,k=0;

int main()
{
    cout<<"n=";cin>>n;
    cout<<endl;
    for(i=1;i<=n;i++){
        cout<<"Nume: ";cin>>ve[i].nume;
        cout<<"Liceu: ";cin>>ve[i].liceu;
        cout<<"Medie: ";cin>>ve[i].medie;
    }
    cout<<endl<<endl;
    for(i=1;i<n;i++)
        for(j=i+1;j<=n;j++){
            if(ve[i].medie<ve[j].medie)swap(ve[i],ve[j]);
            if(ve[i].medie==ve[j].medie)
                if(ve[i].nume<ve[j].nume)swap(ve[i],ve[j]);
        }
    for(i=1;i<=n;i++){
        s=s+ve[i].medie;
        k++;
    }
    s=s/k;
    for(i=1;i<=n;i++)
        cout<<ve[i].nume<<" "<<ve[i].liceu<<" "<<ve[i].medie<<" "<<endl<<endl;
    cout<<"Medie totala: "<<s;
    return 0;
}
