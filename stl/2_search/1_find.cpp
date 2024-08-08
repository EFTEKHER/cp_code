/*
code written by Eftekher Ali Efte from Bangladesh 
 email:eftekherali2000@gmail.com
pursuing computer science and engingeering in Ruet 
*/
#include<iostream>
#include<stdio.h>
#include<bits/stdc++.h>
#include<stdlib.h>
#define ull unsigned long long int
#define ll long long int
#include<ctype.h> 
using namespace std;
      
        
int main()
{
    int arr[]={1,2,3,4,5,6,7,8,9,10,11};
    int n=sizeof(arr)/sizeof(arr[0]);

    int key;
    cin>>key;
    auto it=find(arr,arr+n,key);
    int index=it-arr;
if(index>=n)
{
    cout<<"element not found"<<endl;
}
else
{
    cout<<"element found at index "<<index<<endl;
}

        
return 0;
}
