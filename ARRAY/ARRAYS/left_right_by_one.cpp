#include<iostream>
using namespace std;
int main(){

    int n;

    cout << "print no of elements in an array " << " ";
    cin >> n;
    int arr[n];
    cout <<'\n' << "Enter input for array" << " ";

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"displaying elements entered in array : " << " ";
    for(int j=0;j<n;j++){
        cout << arr[j] <<" ";
    }

    if(n>1){
        int temp=arr[0];
        for(int i=1;i<n;i++){
            arr[i-1]=arr[i];
        }
        arr[n-1]=temp;
    }

    cout << "shifted arrat is : " << " ";

    for(int i=0;i<n;i++){
        cout << arr[i] << " ";
    }

    return 0;
}