#include<iostream>
#include<algorithm>
using namespace std;
void unionSorted(int arr1[],int n1,int arr2[],int n2){
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);

    int tempUnion[n1+n2];
    
    int *end_ptr= set_union(arr1,arr1+n1,arr2,arr2+n2,tempUnion);
    int unionSize=end_ptr-tempUnion;

    cout<<"Union of two sets : ";
    for(int i=0;i<unionSize;i++){
        cout<<tempUnion[i]<<" ";
    }
    cout<<endl;
}
int main(){
    int n1,n2;
    cout<<"Enter number of elements in array 1 , array 2";
    cin>>n1>>n2;

    int arr1[n1],arr2[n2];
    cout<<"Enter elements in array 1 : ";
    for(int i=0;i<n1;i++){
        cin>>arr1[i];
    }
    cout<<"Enter elements in array 2 : ";
    for(int i=0;i<n2;i++){
        cin>>arr2[i];
    }
    unionSorted(arr1,n1,arr2,n2);
    return 0;
}