#include <iostream>
using namespace std;
int main(){

int a;

cout<<"Enter Your Marks: ";
cin>>a;

if(a>=80){
    cout<<"Your Gread: A+";
}

else if (a>=70){
    cout<<"Your Gread: A";
}

else if (a>=60){
    cout<<"Your Gread: A-";
}

else if (a>=50){
    cout<<"Your Gread: B";
}

else if (a>=40){
    cout<<"Your Gread: C";
}

else if (a>=33){
    cout<<"Your Gread: D";
}

else {
    cout<<"Sorry you are: F";
}

return 0;
}