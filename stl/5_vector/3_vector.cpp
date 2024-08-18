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
bool compare(pair<int,int> a, pair<int,int> b)
{
    int d1=a.first*a.first + a.second*a.second;
    int d2=b.second*b.second + b.first*b.first;
    if(d1==d2)
    {
        return a.first<b.first;
    }
    return d1<d2;

}      
        
int main()
{
 int n;
 cin>>n;
 vector<pair<int,int>> v; 
 for(int i=0;i<n;i++)
 {
     int x,y;
     cin>>x>>y;
     v.push_back(make_pair(x,y));
 }  
sort(v.begin(),v.end(),compare);

for(auto p:v)
{
    cout<<"Car "<<p.first<<" "<<p.second<<endl;
}
return 0;
}
