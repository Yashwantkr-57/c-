#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float s,a,b,c,area;
    cout<<"enter first number";
    cin>>a;
    cout<<"enter second number";
    cin>>b;
    cout<<"enter third number";
    cin>>c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    cout<<"Area="<<area;
    return 0;

}