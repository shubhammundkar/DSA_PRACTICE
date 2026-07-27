#include<iostream>
#include <climits>

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
        cout << arr[j] <<'\n';
    }

    int max=INT16_MIN;
    int secondmax=INT16_MIN;

    for(int k=0;k<n;k++){
        if(arr[k]>max){
            secondmax=max;
            max=arr[k];
        }
        else if(arr[k]>secondmax && arr[k]!=max){
            secondmax=arr[k];
        }
    }

    cout << "second_largest number in array is : " << secondmax;
    return 0;
}
