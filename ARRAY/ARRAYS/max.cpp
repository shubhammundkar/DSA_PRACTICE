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
        cout << arr[j] <<'\n';
    }
    int max=arr[0];
    for(int k=0;k<n;k++){
        if(arr[k]>max){
            max=arr[k];
        }
    }
    cout << "largest number in array is : " << max;
    return 0;
}
