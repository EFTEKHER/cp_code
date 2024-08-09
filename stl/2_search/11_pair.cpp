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
 pair<int,char>p;
 p.first=10;
 p.second='a';

//another way

pair<int,char>p1(20,'b');
cout<<p1.first<<" "<<p1.second<<endl;


//another way

pair<int,string>p3=make_pair(30,"eftekher");
cout<<p3.first<<" "<<p3.second<<endl;

//array of pairs
//vector of pairs

pair<pair<int,int>,string>car;
car.second="Audi";
car.first.first=10;
car.first.second=20;
 
 cout<<car.first.first<<" "<<car.first.second<<" "<<car.second<<endl;
return 0;
}
