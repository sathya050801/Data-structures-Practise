//sum of n number using recursion


#include<iostream>

int sum(int n)
{
 if(n==0)
return 0;

else
return sum(n-1)+n;
}

int main()
{
int s=5;
sum(s);
return 0;
}


