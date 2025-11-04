#include<iostream>
using namespace std;
int main(){
    // for(int i = 1; i<10; i++){
    //     cout<<"hay anup\n";
    // }
    cout<<"enter a  positive number";
    int n;
    cin>> n;
    int num= n;
    int rev=0;
    while (n>0)
    {
      int r= n%10;
      rev=rev+10*r;
      n=n/10; 
    }
    if(num==rev){
        cout<<"your input number is pallidon";
    }
    else{
        cout<<"your input number is not pallindron";
    }
}