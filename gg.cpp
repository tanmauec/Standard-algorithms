#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<fstream>
using namespace std;

int compute(int n)
{
    if(n==0)return 0;
    else if(n==1)return 1;
    else if(n%2==0)return compute(n/2);
    else return compute(n/2)+1;
    }


int main()
{
    ifstream fin;
    fin.open("hi.txt");

    int n=100000;
   // scanf("%d",&n);
   int a[n];

    for(int i=0;i<n;++i)
    {
        fin>>a[i];
        a[i]=compute(a[i]);
   // printf("%d",a[i]);
    }


sort(a,a+n);

long long int count=0;
unsigned long long int ways=0;
int p=0;
while(p<n)
{   count=0;
    while(a[p]==a[p+1]&&p<n-1){count++;p++;}
    count+=1;
    ways+=count/2;
    ways*=(count-1);

    p++;

}


cout<<ways;
    return 0;
}
