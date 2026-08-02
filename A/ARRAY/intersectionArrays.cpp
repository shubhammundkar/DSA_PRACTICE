#include<iostream>
#include<algorithm>
using namespace std;
void findIntersection(int arr1[],int n1,int arr2[],int n2){
    sort(arr1,arr1+n1);
    sort(arr2,arr2+n2);
    int z=min(n1,n2);
    int tempIntersection[z];
    int* end_pointer=set_intersection(arr1,arr1+n1,arr2,arr2+n2,tempIntersection);

    int intersectionSize=tempIntersection-end_pointer;

    for(int i=0;i<intersectionSize;i++){
        cout<<tempIntersection[i]<<" ";
    }
}
int main(){
    int arr1[]={1,3,4,5,6,7,9};
    int arr2[]{1,3,9,4,2};
    int n1=sizeof(arr1)/sizeof(arr1[0]);
    int n2=sizeof(arr2)/sizeof(arr2[0]);

    findIntersection(arr1,n1,arr2,n2);

    return 0;
}