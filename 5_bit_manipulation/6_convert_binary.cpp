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
      
 int convertToBinary(int n)
 {
     int ans=0;
     int p=1;
     while(n>0)
     {
         int last_bit=(n&1);
         ans+=p*last_bit;
         p=p*10;
         n=n>>1;
     }
     return ans;
 }       
int main()
{
    int x;
    cin>>x;
    cout<<convertToBinary(x)<<endl;    
return 0;
}
