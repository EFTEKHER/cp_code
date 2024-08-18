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
 void setBit(int &n,int i)
 {
        int mask=(1<<i);
        n=(n|mask);
 }     
        
int main()
{
      int n=5;
        int i;
        cin>>i;
        setBit(n,i);
        cout<<n<<endl;  
return 0;
}
