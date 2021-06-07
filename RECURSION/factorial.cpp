#include<iostream.h>
#include<conio.h>

int fact(int n)
{

if(n==0)
return 1;

else
return fact(n-1)*n;
}

int main()
{
int s=2;
fact(s);
return 0;
}

