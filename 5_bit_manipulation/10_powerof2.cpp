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
    if(n & (n-1)==0)
    {
        cout<<"power of 2"<<endl;
    }
    else
    {
        cout<<"not power of 2"<<endl;
    }
        
return 0;
}
