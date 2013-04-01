#include<stdio.h>
#include<string.h>

int main()
{
    int t;
    int count[256];
    char s[201];
    int sum;
    scanf("%d",&t);
    for(int i=0;i<t;++i)
    {
        for(int j=65;j<=122;++j)count[j]=0;
        int itr=0;
        scanf("%s",s);
        for(int j=0;j<strlen(s);++j)
        {
          count[s[j]]++;
        }

        sum=0;
        for(int itr=65;itr<=122;++itr)
        {
            if(count[itr]%2)sum+=count[itr]/2+1;
            else sum+=count[itr]/2;
        }

    printf("%d\n",sum);
    }




    return 0;
}
