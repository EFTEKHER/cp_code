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
   int arr[]={10,20,30,40,40,40,50,60,70,80,90};
   int n=sizeof(arr)/sizeof(arr[0]);
   int key;
   cin>>key;
   bool present=binary_search(arr,arr+n,key);
   if(present)
   {
       cout<<"element is present"<<endl;
   }
   else
   {
       cout<<"element is not present"<<endl;
   }     
return 0;
}
