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
      
class Book{
    public:
    string name;
    int price;
    Book(){

    }
    Book(string name,int price){
        this->name=name;
        this->price=price;
    }
};
class BookCompare{
    public:
    bool operator()(Book A,Book B){
        if(A.name==B.name)
        {
            return true;
        }
        return false;

    }
};   
//Templates +Iterators+Comparators
template<class ForwardIterator,class T,class Compare>
ForwardIterator search(ForwardIterator start, ForwardIterator end,T key, Compare cmp)
{
    while(start!=end){
        if(cmp(*start,key)){
            return start;
        }
        start++;
    }
    return end;
}
int main()
{
   Book b1("C++",100);
   Book b2("python",120);
   Book b3("java",130);
   Book b4(b1);

   list<Book>l;
   l.push_back(b1);
   l.push_back(b2);
   l.push_back(b3);
   l.push_back(b4);   

   Book booktofind("C++",140);
   BookCompare cmp;
    auto it=search(l.begin(), l.end(),booktofind,cmp);
    if(it!=l.end()){
        cout<<"Book found in the library"<<endl;
    }
    else{
        cout<<"Book not found in the library"<<endl;
    }
return 0;
}
