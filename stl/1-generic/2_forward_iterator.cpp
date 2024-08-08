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
//template <typename T>


   

template<class ForwardIterator,class T>
ForwardIterator search(ForwardIterator start, ForwardIterator end,T key)
{
    while(start!=end){
        if(*start==key)
        {
            return start;
        }
        start++;
    }
}
int main()
{
//   int a[]={1,2,3,4,10,12};
//   int key=10;
list<int>l;
l.push_back(1);
l.push_back(2);
l.push_back(3);
l.push_back(4);
l.push_back(5);
auto it=search(l.begin(), l.end(),4);
cout<<*it<<endl;
return 0;
}
