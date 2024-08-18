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
    list<string> l1;
    l1.push_back("hello");
    l1.push_back("world");
    l1.push_back("bangla");
    l1.push_back("desh");
   
   for(auto x:l1){
         cout<<x<<"-->";
   }   
    //remove a fruit
    string f;
    cin>>f;
    l1.remove(f);
 for(auto x:l1){
         cout<<x<<"-->";
   }
    cout<<endl;

    //erase one or more elements

    auto it=l1.begin();
    it++;
    it++;
    l1.erase(it);

 for(auto x:l1){
         cout<<x<<"-->";
   }

it=l1.begin();

it++;
l1.insert(it,"FruitJuice");
cout<<endl;
 for(auto x:l1){
         cout<<x<<"-->";
   }
    cout<<endl;
  
l1.sort();

 for(auto x:l1){
         cout<<x<<"-->";
   }
    cout<<endl;


        
return 0;
}
