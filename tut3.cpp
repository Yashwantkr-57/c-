#include<iostream>
using namespace std;
int glo = 6;
void sum(){
    int a;
    cout<< glo;
}

int main(){
    int glo=9;
    glo=78;
    // int a=4;
    // int b=5;
    int a=4,b=5;
    float pi=3.14;
    char c = 'u';
    bool f = false;
    sum();
    cout<<glo<< f;
    // cout<<"Hello Friend.\n The value of a is"  <<a<<".\nThe value of b is" <<b;
    // cout<<"\nThe value of pi is:"  <<pi<<".\n The value of c is" <<c;
    return 0;
}