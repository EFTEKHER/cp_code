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
    string s0;

    string s2="Hello world";

    string s3(s2);
    string s5=s3;
    char a[]={'a','b','c','d','\0'};

    string s4(a);
    cout<<s4<<endl;
    cout<<s5<<endl;
    cout<<s2<<endl;
    cout<<s3<<endl;

if(s0.empty())
{
cout<<"s0 is empty"<<endl;
}
s0.append("I love c++");
cout<<s0<<endl;
s0+=" and python";   
cout<<s0<<endl;

//Remove
cout<<s0.length()<<endl;
s0.clear();
cout<<s0.length()<<endl;
//compare two strings
string s1;
s0="Apple";
s1="Mango";
cout<<s0.compare(s1)<<endl;

//overloaded operator 
if(s0>s1)
{
    cout<<"Apple is greater than Mango"<<endl;
}
else
{
    cout<<"Mango is greater than Apple"<<endl;
}

//Find substrings

string s="I want to have apple juice";
int idx=s.find("apple");
cout<<idx<<endl;

//Remove a word from the string

string word="apple";
int len=word.length();
s.erase(idx,len+1);
cout<<s<<endl;

//Iterate over all the characters in the string

for(int i=0;i<s.length();i++)
{
    cout<<s[i]<<":";
}

cout<<endl;

//Iterators

for(auto it=s.begin();it!=s.end();it++)
{
    cout<<(*it)<<endl;
}
cout<<endl;

//for each loop

for(auto c:s1)
{
    cout<<c<<".";
}

return 0;
}
