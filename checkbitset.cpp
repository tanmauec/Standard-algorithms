#include<stdio.h>

#define CHK(var,pos)   (var & (1<<pos))


int main()
{

    char a[] = { 'a','b','c' } ;
   //int j=2;
   for(int itr=0;itr<2^3;itr++)
   {
   for(int i=0;i<3;i++)
   {
       if(CHK(itr,i))printf("%c ",a[2-i]);
   }


   }

}
