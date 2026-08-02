 #include<iostream>
using namespace std;
int main(){
    int n;
    int sum=0;

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

    for(int k=0;k<n;k++){
        sum+=arr[k];
    }
    cout << "sum of all elements is : " << sum;
    return 0;
}