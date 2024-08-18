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
int count_bits(int n)
{
    int count=0;
    while(n>0)
    {
       int last_bit=n&1;
       count+=last_bit;
         n=n>>1;
        
    }
    return count;
}
        
int main()
{
 int n;
 cin>>n;
 cout<<count_bits(n)<<endl;       
return 0;
}
