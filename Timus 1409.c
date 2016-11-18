/**
Program name : Timus 1409(I found this problem on timus online judge site...problem no. 1293)
Solved On :18/11/2016,11:30 pm
Solved By : Farhana Ahmed Fima
**/


#include<stdio.h>
int main()


{
    int a,b,c,d,e;
    scanf("%d %d",&a,&b);
    c=(a+b)-1;
    d=c-a;
    e=c-b;
    printf("%d %d\n",d,e);
    return 0;

}
