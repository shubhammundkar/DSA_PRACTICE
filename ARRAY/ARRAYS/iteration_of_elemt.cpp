#include<iostream>
using namespace std;
int main(){
    int n;
    int found=0;
    cout << "enter no of elements in array : ";
    cin >> n;
    int arr[n];

    for(int i=0;i<n;i++){
        cin >> arr[i];
    }

    cout <<"displaying elements entered in array :\n ";
    for(int j=0;j<n;j++){
        cout << arr[j] << " ";
    }
    int k;
    cout << "\nenter no to find in array" << " ";
    cin >> k;
    for(int i=0;i<n;i++){
        if(arr[i]==k){
            found++;
        }
    }
 
    cout << k << " is this many times in array " << found;
    return 0;
}
