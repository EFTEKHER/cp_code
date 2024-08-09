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
  vector<int>a;
  vector<int>b(5,10);
  vector<int>c(b.begin(),b.end());
  vector<int>d{1,2,3,4,5};
  for(int i=0;i<d.size();i++){
    cout<<d[i]<<" ";
  } 
cout<<endl;
  for(auto it=b.begin();it!=b.end();it++)
  {
    cout<<*it<<" ";
  } 

  vector<int> v;
  int n;
  cin>>n;

  for(int i=0;i<n;i++)
  {
    int no;
    cin>>no;
    v.push_back(no);

  }   
    for(int i=0;i<v.size();i++)
    {
        cout<<v[i]<<" ";
    }
    cout<<endl;

    cout<<v.size()<<endl;
    cout<<v.capacity()<<endl;
    cout<<v.max_size()<<endl;
return 0;
}
