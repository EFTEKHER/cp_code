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

int getIthbit(int n,int i)
{
    int mask=(1<<i);
    return (n&mask)>0?1:0;
}       
        
int main()
{
    int n=5;
    int i;
    cin>>i;
    cout<<getIthbit(n,i)<<endl;
        
return 0;
}
