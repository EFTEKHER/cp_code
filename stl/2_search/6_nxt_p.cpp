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
   int arr[]={10,20,30,40,50,60,70,80,90};
   int n=sizeof(arr)/sizeof(int);
   rotate(arr,arr+2,arr+n);
   for(int i=0;i<n;i++)
   {
       cout<<arr[i]<<" ";
   } 
cout<<endl;
   vector<int> v{10,20,30,40,50,60,70,80,90};
   rotate(v.begin(),v.begin()+3,v.end());
   for(int i=0;i<v.size();i++)
   {
       cout<<v[i]<<" ";
   }    
return 0;
}
