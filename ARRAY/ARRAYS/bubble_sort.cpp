#include<iostream>
using namespace std;
int main(){
    int n;

    cout << "print no of elements in an array ";
    cin >> n;
    int arr[n];
    cout <<'\n' << "Enter input for array\n";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"displaying elements entered in array : " << " ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }

    for(int i=0;i<n-1;i++){
        int temp=arr[i];
        if(arr[i]>arr[i+1]){
            arr[i]=arr[i+1];
        }
        arr[i+1]=temp;
    }
    cout << " sorted array is " << " ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
    return 0;
 }