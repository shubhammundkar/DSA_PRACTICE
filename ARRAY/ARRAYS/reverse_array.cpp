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

    cout <<"displaying elements entered in array :\n ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }

    for(int z=0;z<n/2;z++){
        int temp=arr[z];
        arr[z]=arr[n-1-z];
        arr[n-1-z]=temp;
    }

    cout <<"reversed array is as follows \n";
    for(int p=0;p<n;p++){
        cout << arr[p] << " ";
    }

    return 0;
}