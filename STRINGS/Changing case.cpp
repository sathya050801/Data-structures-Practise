#include <iostream>

using namespace std;

int main()
{
    char arr[]="Hello how are you";
    int i;
    
    for(i=0;arr[i]!='\0';i++)
    {
       if(arr[i]>=65 && arr[i]<=90)
       {
           arr[i]= arr[i]+32;
       }
       else if(arr[i]>=97 && arr[i]<=120)
       {
       arr[i]=arr[i]-32;
       }
    }
    cout<<arr;
    return 0;
}

