#include<iostream>
#include<math.h>
using namespace std;
int main(){
    float P,R,T,ci;
    cout<<"enter P";
    cin>> P;
    cout<<"enter R";
    cin>> R;
    cout<<"enter T";
    cin>> T;
    ci=P*pow(1+R/100,T)-P;
    cout<<"CI="<<ci;
    return 0;

}
