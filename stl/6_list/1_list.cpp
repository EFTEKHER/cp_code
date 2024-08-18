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
    list<int>l;
    list <int> l1{1,2,3,4,5,6,7,8};

    list<string> l2{"apple", "orange", "guava", "banana"};
    l2.push_back("pineapple");
    l2.push_back("watermelon");

    for(string s:l2){
        cout<<s<<"-->";
    }

      cout<<endl;
      l2.sort();
      for(string s:l2){
        cout<<s<<"-->";
    }

      cout<<endl;
      l2.reverse();   
      for(string s:l2){
        cout<<s<<"-->";
    }

      cout<<endl;

      cout<<l2.front()<<endl;
      l2.pop_front();

      l2.push_back("kiwi");
      l2.push_front("Efte");
        for(string s:l2){
        cout<<s<<"-->";
    }

      cout<<endl;


for(auto it=l2.begin();it!=l2.end();it++){
    cout<<(*it)<<"-->";
}



return 0;
}
