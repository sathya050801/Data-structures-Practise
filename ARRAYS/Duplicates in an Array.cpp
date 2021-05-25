/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;

   void findingDuplicates(int a[],int n)
    {
        int lastdup=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==a[i+1] && a[i]!= lastdup)
            {
                cout<<a[i]<<" ";
                lastdup= a[i];
            }
        
        }
    }
int main()
{
    int a[10]={1,2,2,2,3,4,5,6,6,7};
    cout<<"The duplicates are ";
    findingDuplicates(a,10);
    return 0;
}
