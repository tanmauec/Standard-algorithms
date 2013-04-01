#include<stdio.h>


int main()
{
    int n;
    scanf("%d",&n);
    int sum=0;
    int i;
    for(int p=0;p<n;++p)
    {
        scanf("%d",&i);
        sum+=i;
    }

    int ways;
    ways=0;
    for(int p=1;p<=5;++p)
    {
       if((p+sum)%(n+1)!=1)ways++;
    }

    printf("%d",ways);

    return 0;
}
