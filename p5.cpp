#include<iostream>
using namespace std;
int main(){
    cout<<"plese enter ypur age:";
    int age;
    cin >>  age;
    if (age<18)
    {
        cout<<"you not eligible for job";
        
    }
    else  if (age>=18 && age <=54)
    {
        cout<<"you eligible for job";

    }
   else  if (age>= 57&& age<=55)
    {
        cout<<"you eligible for job and retirment time is soon";

    }
    else if (age>58)
    {
        cout<<"retiement time";

    }
    else{
        cout<<"plese enter correct age";
    }
}