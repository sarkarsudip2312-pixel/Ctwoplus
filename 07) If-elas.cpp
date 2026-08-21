#include <iostream>
using namespace std;
int main(){
    
    int age;
    
    cout<<"Enter Age: ";
    cin>>age;
    
    if(age>18){
        cout<<"Adult";
    }
    
    else{
        cout<<"Baby";
    }
    return 0;
}