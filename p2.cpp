#include<iostream>
using namespace std;
int main(){
    cout<<"enter your age"<<"\n";
    int age ;
    cin>>age;
    if(age>+18){
        cout<<"you eligible for vote";
    }
    else{
        cout<<"you not eligible for vote";
    }
}