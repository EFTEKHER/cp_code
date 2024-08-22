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
const int mod=1e9+7;
ll power1(ll a,ll b)
{
     ll res=1;
     while(b)
     {
        if(b&1)
        {
            res*=a;
            res%=mod;
        }
        a*=a;
        a%=mod;
        b>>=1;

        
     }
     return res;
}      
        
int32_t main()
{
 cout<<power1(2,200)<<endl;
        
return 0;
}
