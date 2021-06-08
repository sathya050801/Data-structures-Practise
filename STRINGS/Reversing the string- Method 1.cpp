#include <iostream>

using namespace std;

void reverseSTR(char arr[])
{
    int low=0,high;
    for(high=0;arr[high]!='\0';high++)
    {
    }
    high=high-1;
    while(low<high)
    {
        int temp= arr[low];
        arr[low]= arr[high];
        arr[high]= temp;
        low++,high--;
    }
    cout<<"The reversed string is "<<arr;
}
    
    int main()
{
    char arr[]="Sathya";
    reverseSTR(arr);
 return 0;
}