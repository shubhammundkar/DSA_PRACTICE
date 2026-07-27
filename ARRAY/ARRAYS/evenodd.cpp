#include<iostream>
using namespace std;
int main(){
    int n;
    int evencount=0;
    int oddcount=0;

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

    for(int j=0;j<n;j++){
        if(arr[j]%2==0){
            evencount++;
        }
        else{
            oddcount++;
        }
    }
    cout << "even elemnts are : " << evencount;
    cout << "odd elemnts are : " << oddcount;
    return 0;
}
