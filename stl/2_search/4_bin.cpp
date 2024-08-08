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

bool compare(int a, int b)
{
    cout<<"Comparing "<<a<<" "<<b<<endl;
    return a>b;

}      
        
int main()
{
    int n,key;
    cin>>n>>key;
    int a[1000];

    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    sort(a,a+n,compare);
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
        
return 0;
}
