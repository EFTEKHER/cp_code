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
    //indian money change
    int coins[]={1,2,5,10,20,50,100,200,500,100};
    int money = 168;
    int n=sizeof(coins)/sizeof(int);
    int lb=lower_bound(coins,coins+n,money)-coins-1;
    // cout<<"lower bound of "<<money<<" is "<<coins[lb]<<endl; 
    while(money>0)
    {
        int lb=lower_bound(coins,coins+n,money)-coins-1;
        cout<<coins[lb]<<" ";
        money-=coins[lb];
    }     
return 0;
}
