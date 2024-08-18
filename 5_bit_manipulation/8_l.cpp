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
void clearBitchange(int &n,int i,int j)
{
    int mask=(~0)<<(j+1);
    int mask2=(1<<i)-1;
    mask=mask|mask2;
    n=(n&mask);
}

        
int main()
{
    int n=31;
    int i=1;
    int j=3;
    clearBitchange(n,i,j);
    cout<<n<<endl;
    cout<<((1<<2))<<endl;
        
return 0;
}
 