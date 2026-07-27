#include<iostream>
using namespace std;
int main(){
    int n;
    bool isFound=false;
    cout << "enter no of elements in array : " << " ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"displaying elements entered in array : " << " ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
    int k;
    cout << "enter no to find in array" << " ";
    cin >> k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            isFound=1;
            break;
        }
    }
    if(isFound){
        cout << k << "is present in array";
    }
    else{
        cout << k << " is not present in array";
    }
    return 0;
}