/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>

using namespace std;


    void missingelement(int a[],int n)
    {
        int diff=a[0]-0;
        for(int i=0;i<n;i++)
        {
            if(diff!=a[i]-i)
            {
                int ans=diff+i;
                cout<<"The missing element is "<<ans;
            }
        }
    }

   int main()
   {
       int a[]={6,7,8,9,10,11,12,14};
       missingelement(a,8);
     return 0;
   }
  

