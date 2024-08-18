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
    priority_queue<int> pq;
    int n;
    cin>>n;    
    for(int i=0; i<n;i++)
    {
        int no;
        cin>>no;
        pq.push(no);

    }
    while(!pq.empty())
    {
        cout<<pq.top()<<" ";
        pq.pop();
    }
        
return 0;
}
