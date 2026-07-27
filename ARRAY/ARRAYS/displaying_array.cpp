#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "print no of elements in an array " << " ";
    cin >> n;
    int arr[n];
    cout << "Enter input for array\n";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"displaying elements entered in array : " << " ";
    for(int j=0;j<n;j++){
        cout << arr[j] <<'\n';
    }
    return 0;
 }