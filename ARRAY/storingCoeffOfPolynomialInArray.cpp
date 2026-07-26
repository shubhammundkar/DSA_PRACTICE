#include<iostream>
using namespace std;

int main(){
    int degree;
    cin>>degree;
    cout<<"Enter coeffiecnt of x^0 to x^"<<degree<<" : ";
    int coeff[degree+1];
    for(int i=0;i<=degree;i++){
        cin>>coeff[i];
    }
    
    cout<<"Stored Array : ";
    for(int i=0;i<=degree;i++){
        cout<<coeff[i]<<" ";
    }

    return 0;
}