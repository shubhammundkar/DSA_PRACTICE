#include<iostream>
#include<algorithm>
using namespace std;

void findUnion(int arr1[],int n,int arr2[],int m){
    sort(arr1,arr1+n);
    sort(arr2,arr2+m);

    int tempUnion[n+m];

    int* end_ptr = set_union(arr1,arr1+n,arr2,arr2+m,tempUnion);

    int unionSize = end_ptr - tempUnion;

    cout<<"Union of both arrays : ";
    for(int i=0;i<unionSize;i++){
        cout<<tempUnion[i]<<" ";
    }
    cout<<endl;

}
int main(){
    int arr1[]={1,3,5,7,9};
    int arr2[]={3,4,5,6,7,2};
    int n = sizeof(arr1)/sizeof(arr1[0]);
    int m = sizeof(arr2)/sizeof(arr2[0]);

    findUnion(arr1,n ,arr2,m);
    return 0;
}