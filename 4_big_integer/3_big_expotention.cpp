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

int power1(int a,int b)
{
     int res=1;
     while(b)
     {
        if(b&1)
        {
            res*=a;
        }
        a*=a;
        b>>=1;

        
     }
     return res;
}      
        
int main()
{
 cout<<power1(2,10)<<endl;
        
return 0;
}
