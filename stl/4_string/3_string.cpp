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
    int n;
    cin>>n;
    cin.get();
    string s[100]; //vector

   
    for(int i=0;i<n;i++)
    {
      getline(cin,s[i]);
    }
     sort(s,s+n);
    for(int i=0;i<n;i++)
    {
        cout<<s[i]<<" ";
    }

        
return 0;
}
