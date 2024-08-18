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

class Person{
    public:
    string name;
    int age;
    Person(){}
    Person(string name, int age)
    {
        this->name=name;
        this->age=age;
    }
    void display()
    {
        cout<<name<<" "<<age<<endl;
    }
};      
class PersonCompare{
    public:
    bool operator()(Person a, Person b)
    {
        return a.age<b.age;
    }
};        
int main()
{
  int n;
  cin>>n;
  priority_queue<Person,vector<Person>,PersonCompare>pq;
  for(int i=0; i<n; i++)
  {
      string name;
      int age;
      cin>>name>>age;
      Person p(name, age);
      p.display();
      pq.push(p);
  }    
  int k=3;

  for(int i=0; i<k; i++)
  {
    Person p=pq.top();
    cout<<p.name<<" "<<p.age<<endl;
    pq.pop();
    
  }  
return 0;
}
