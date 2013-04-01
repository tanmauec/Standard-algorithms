#include<cmath>
#include<stdio.h>

int main()
{
    int t;
    int n;
    int subt;
    long long ans;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        scanf("%d",&n);

    if(n%2==0)
    {
      subt=n*(n-1)/2;
      ans=((int)pow(2,(double)n)%1000000007 ;
      ans=(ans-subt)/2;
    }
    else{
    ans=((int)pow(2,n)/2)%1000000007;
    }
    printf("%d\n",ans);

    }

    return 0;
}
