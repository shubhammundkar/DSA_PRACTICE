#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={2,3,6,4,8};
    int n=sizeof(arr)/sizeof(arr[0]);

    int mx = *max_element(arr,arr+n);
    int mn = *min_element(arr,arr+n);

    cout<<"maximum elemnt is : " <<mx <<endl;
    cout<<"minimum element is : "<<mn <<endl;

    return 0;
}