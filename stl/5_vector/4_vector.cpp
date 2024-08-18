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



class Car{
    public:
    string name;
    int x,y;
    Car(){

    }
    Car(string n,int x,int y){
        name = n;
        this->x = x;
        this->y = y;

    }
    int dist()
    {
        // cout<<"Distance of "<<name<<" from origin is "<<x*x+y*y<<endl;
        return (this->x*this->x+this->y*this->y);
    }
    
} ;     
  bool compare(Car A,Car B){
    int da=A.dist();
    int db=B.dist();
    if(da==db){return 
    A.name<B.name;}
    return da<db;
     }      
int main()
{
  int n;
  cin>>n;

  vector<Car>v;
  for(int i=0;i<n;i++)
  {
      string name;
      int x,y;
      cin>>name>>x>>y;
      Car temp(name,x,y);
      v.push_back(temp);
  } 
  sort(v.begin(),v.end(),compare); 

  //for each loop
  for(auto c:v)
  {
    cout<<"Car:"<<c.name<<" Dist:"<<c.dist()<<endl;
  }    
return 0;
}
