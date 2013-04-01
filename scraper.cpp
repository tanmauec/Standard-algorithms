#include<stdio.h>

//function to chk if a no is member of a particular AP
bool member( int a, int d, int no )
{
    if( (no-a)%d==0 ) return true;
    else return false;
}

bool isreachable(int a , int b , int elevfloor[][2] , int floors , int elev)
{
    // if you reach one floor of an elevator you can reach any floor that elevator goes to
    // thus if two elevators have a common floor all floors of the two elevators
    // are mutually reachable
    // thus we need to find if there is a reachability link btw any of the elevators
    // of which these two floors are a member
    // elevators are numbered from 0 to elev - 1

    bool fora[elev];
    bool forb[elev];

    int i=0;
    while(i<elev)
    {
        if( member( elevfloor[i][0] , elevfloor[i][1] , a) ) fora[i]=true;
        else fora[i]=false;

        if( member( elevfloor[i][0] , elevfloor[i][1] , b) ) forb[i]=true;
        else forb[i]=false;


        i++;
    }

    // establish reachability btw two elevators=> common elements


}


int main()
{
    // draw a reachability graph

int t;
int elevfloor[100][2];
bool flag;
scanf("%d",&t);
int floors,elev,a,b;
for(int i=0;i<t;++i)
{
    scanf("%d%d%d%d",&floors,&elev,&a,&b) ;
    // no of elevators can be zero too
    int p=0;
    while(p<elev)
    {
        scanf("%d%d",&elevfloor[p][0],&elevfloor[p][1]) ;
        p++;
    }
    // function to test if b is reachable from a

flag=isreachable(a,b);
    if(flag)printf("It is possible to move the furniture.\n");
    else printf("The furniture cannot be moved.\n");

}





    return 0;
}
