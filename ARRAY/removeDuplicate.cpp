#include<iostream>
#include<unordered_set>
using namespace std;

void removeDuplicate(int arr[], int n){
    unordered_set<int> s;

    for(int i=0; i<n; i++){
        if(s.find(arr[i]) == s.end()){
            cout << arr[i] << " ";
            s.insert(arr[i]);
        }
    }
}

int main(){
    int n;
    cin >> n;

    int arr[n];

    for(int i=0; i<n; i++)
        cin >> arr[i];

    removeDuplicate(arr, n);
}