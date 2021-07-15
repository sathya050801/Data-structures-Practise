/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class Node
{
    public:
     int data;
     Node* next;
};

void print(Node* n)
{
    while(n!=NULL)
    {
        cout<<n->data<<" ";
        n=n->next;
    }
}


int main()
{
    Node* first=NULL;
    Node* second=NULL;
    Node* third=NULL;
    
    first=new Node();
    second=new Node();
    third=new Node();
    
    first->data=5;
    first->next= second;
    
    second->data=10;
    second->next= third;
    
    third->data=15;
    third->next=NULL;
    
    print(first);
    
    return 0;
}

