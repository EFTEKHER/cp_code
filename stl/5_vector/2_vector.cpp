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
    vector<int> d{1,2,3,10,14};
    d.push_back(16);
    for(int x:d)
    {
        cout << x << " ";
    }

     d.pop_back();
cout<<endl;
     d.insert(d.begin()+3,4);
      for(int x:d)
    {
        cout << x << " ";
    }  
    cout<<endl;
      d.insert(d.begin()+3,5,100);
      for(int x:d)
    {
        cout << x << " ";
    }
    cout<<endl;   
    //erase
    d.erase(d.begin()+2);
      for(int x:d)
    {
        cout << x << " ";
    }
        d.erase(d.begin()+2,d.begin()+5);
        cout<<endl;
      for(int x:d)
    {
        cout << x << " ";
    }

    //
    d.resize(8);
cout<<endl;
    cout<<d.capacity()<<endl;
d.clear();
d.push_back(10);
d.push_back(20);
d.push_back(30);
cout<<d.size()<<endl;
cout<<d.front()<<endl;

cout<<d.back()<<endl;

// To avoid doubling

d.reserve(1000);
int n;
cin>>n;
for(int i=0; i<n; i++)
{
    int no;
    cin>>no;
    d.push_back(no);
    cout<<"changing capacity"<<d.capacity()<<endl;
}
cout<<d.capacity()<<endl;

return 0;
}
