#include <iostream>

using namespace std;

int main()
{
    char arr[]="Hello how are you";
    int i,vcount=0,ccount=0;
    
    for(i=0;arr[i]!='\0';i++)
    {
       if(arr[i]=='a' || arr[i]=='e' || arr[i]=='i' || arr[i]=='o' || arr[i]=='u'|| arr[i]=='A' || arr[i]=='E' || arr[i]=='I' || arr[i]=='O' || arr[i]=='U')
          {
              vcount++;
          }
          
          else if(arr[i]>=65 && arr[i]<=120)
          {
              ccount++;
          }
    }
    cout<<"No. of vowels is "<<vcount<<endl;
    cout<<"No. of consonants is "<<ccount;
    return 0;
}