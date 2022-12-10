#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

int biti[101],b10[101],base,baseto,aux;
char n[101],ch,solutions[101];

void verif_base()
{
    cout<<"What base to convert to: ";
    cin>>baseto;
    if(baseto < 2 || baseto > 36)
    {
        cout<<"Incorrect base"<<endl;
        verif_base();
    }
    else return ;
}

void different_base()
{
    cout<<"Base: ";
    cin>>base;
    int verif = 1;
    for(int i=0;i<strlen(n);i++)
        if(biti[i] >= base)
        {
            cout<<"Incorrect base for number"<<endl;
            verif = 0;
            break;
        }
    if(verif==0)
        different_base();
}

void ascii_convert()
{
    int k = 0;
    for(int i=0;i<strlen(n);i++)
    {
        if(n[i] >= '0' && n[i] <= '9')
            aux = n[i] - '0';
        if(n[i] >= 'A' && n[i] <= 'Z')
        {
            aux = n[i] - 'A';
            aux += 10;
        }
        if(n[i] >= 'a' && n[i] <= 'z')
        {
            aux = n[i] - 'a';    
            aux += 10;
        }
        biti[k++] = aux;
    }
}

void input()
{
    int p;
    cout<<"Number: ";
    cin.getline(n,101);
    ascii_convert();
    different_base();
    verif_base();
    return ;
}

int convert10()
{
    int number = 0;
    for(int i=0;i<strlen(n);i++)
        number += pow(base,i)*biti[strlen(n)-1-i];
    return number;  
}

void from10(int number)
{
    int rez = 0, power = 1, k = 0;
    cout<<endl;
    cout<<n;
    cout<<"(base "<<base<<") = ";
    while (number!=0)
    {
        int remainder = number % baseto;
        if(remainder >= 10)
        {
            ch = 'A' + char(remainder) - char(10);
            solutions[k++] = ch;
        }
        else
            solutions[k++] = '0' + remainder;
        number /= baseto;
    }
    for(int i=strlen(solutions)-1;i>=0;i--)
        cout<<solutions[i];
    cout<<"(base "<<baseto<<")"<<endl;
}

void solution()
{
    int number,k=0;
    number = convert10();
    from10(number);
}

int main()
{
    input();
    solution();
    return 0;
}