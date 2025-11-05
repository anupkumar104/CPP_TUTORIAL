#include<iostream>
using namespace std;
int main(){
    cout<<"enter your presentage :";
    float per;
    cin>>per;
    if (per<=100 && per>=80)
    {
      cout<<"grade A";
    }
    
    else if (per<=79 && per>=60)
    {
      cout<<"grade B";
    }
    
     else if (per<= 59&& per>=50)
    {
      cout<<"grade c";
    }
    
     else if (per<=49& per>=45)
    {
      cout<<"grade D";
    }
    
     else if (per<=44&& per>=25)
    {
      cout<<"grade E";
    }
    else if  (per<=24)
    {
      cout<<"grade E";
    }
    
}