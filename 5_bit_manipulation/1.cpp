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

void clearIthbit(int &n,int i){
    int mask=~(1<<i);
    n=(n&mask);
}
void updateIthBit(int &n,int i,int val)
{
    clearIthbit(n,i);
    int mask=val<<i;
    n=(n|mask);
}
        
int main()
{
    int n,i,val;

    cin>>n>>i>>val;

    updateIthBit(n,i,val);
    cout<<n<<endl;

        
return 0;
}
