#include<stdio.h>

int gcd( int a, int b)
{
    if(b) return gcd(b,a%b);
    else a>0?a : -a;
}


int main()
{
    int a=99;
    int b=88;
    int x=gcd(a,b);
    printf("%d",x);
    return 0;

}
