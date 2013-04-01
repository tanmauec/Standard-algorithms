#include<stdio.h>
#include<cstring>
void swap(char *x, char *y)
{
    char temp=*x;
    *x=*y;
    *y=temp;
}

void permute(char a[] , int i, int n)
{
    int j;
    if(i==n) printf("%s\n",a);

    for(j=i;j<n;++j)
    {
    swap((a+i),(a+j)) ;
    permute(a,i+1,n);
    swap(a+i,a+j);
    printf("%s\n",a);
    }

return;
}


int main()
{

    char a[]="abc";
    permute(a,0,3);
    return 0;

}
