

#include <iostream>
#include <string.h>

using namespace std;

void ispalindrome(char str[])
{
    int l=0;
    int h= strlen(str)-1;
    
    while(l<h)
    {
        if(str[l]!=str[h])
        {
            cout<<str<<" is not a palindronme "<<endl;
            return;
        }
        
        else
        {
            l++,h--;
        }
        
    }
    cout<<str<<" is a palindrome "<<endl;
}

int main()
{
    ispalindrome("racecar");
    ispalindrome("sathya");
    ispalindrome("malayalam");
    

    return 0;
}
