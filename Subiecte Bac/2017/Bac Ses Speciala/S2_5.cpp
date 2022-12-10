#include <iostream>
#include <cstring>

using namespace std;

char s[101],v[8][4]={"DO","RE","MI","FA","SOL","LA","SI"},*p;
int i,ok;

int main()
{
	cin.getline(s,101);
	p=strtok(s," ");
	while(p)
	{
		for(i=0;i<7;i++)
			if(strstr(p,v[i]))
			{
				cout<<p<<endl;
				ok=1;
				break;
			}	
		p=strtok(NULL," ");
	}
	if(!ok) cout<<"nu exista";
	return 0;
}