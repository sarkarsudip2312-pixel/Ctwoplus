#include <iostream>
using namespace std;
int main(){
    
    int a,b;
    char P, Q;
    
    cout<<"Enter Your 1st Number: ";
    cin>>a;
    
    cout<<"Enter Your 2nd Number: ";
    cin>>b;
    
    P='A';
    Q='B';
    
    if(a>b){
        cout<<"Serial Number: "<<P;
    }
    else{
        cout<<"Serial Number: "<<Q;
    }
    
    return 0;
    
}