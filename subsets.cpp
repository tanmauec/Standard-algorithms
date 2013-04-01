#include<stdio.h>
#include<cmath>
#define CHK(var,pos)   ( (var) & (1<<pos) )

int main()
{

char a[]={'a','b','c'};
// print all subsets
int n=sizeof(a)/sizeof(char) ;

for(int j=0;j<pow((double)2,n);++j)
{  printf("{");
   for(int p=0;p<n;p++)
   {
       if(CHK(j,p)) printf("%c ",a[n-1-p]);
   }
printf("}\n");

}

return 0;

}
