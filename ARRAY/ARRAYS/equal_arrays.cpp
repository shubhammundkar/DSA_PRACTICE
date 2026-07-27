#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "print no of elements in an array " << " ";
    cin >> n;
    int arr[n];
    cout << "Enter input for array " << " ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"displaying elements entered in array : " << " ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
int k;
    cout << "\nprint no of elements in an array1 ";
    cin >> k;
    int arr1[n];
    cout << "Enter input for array1 " << " ";

    for(int i=0;i<n;i++){
        cin >> arr1[i];
    }
    
    cout <<"displaying elements entered in array1 : " << " ";
    for(int j=0;j<n;j++){
        cout << arr1[j] << " ";
    }
    bool equal=true;
    if(n==k){
        for(int i=0;i<n;i++){
            if(arr[i]!=arr1[i]){
                equal=false;
            }
        }
    }
    if(equal){
        cout << "\nboth arrays are equal";
    }
    else{
        cout << "\nboth arrays are not equal";
    }
    return 0;
 }