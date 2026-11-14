#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

int getMaxSubarraySumsOfSizeK(const vector<int>& arr, int k){

    if(k>arr.size() || k<0) return LLONG_MIN; // edge case invalid k;

    int currentSum = 0;
    for(int i=0;i<k;i++){ // first-> sum of first k elements;
        currentSum+=arr[i];
    }
    int max_sum = currentSum;

    for(int i=k;i<arr.size();i++){// sliding window of k elements accross the arr:
        currentSum+=arr[i] - arr[i-k];
        max_sum = max(currentSum, max_sum);
    }
    
    return max_sum;
}
int main() {
    vector<int> numbers = {2, 5, 1, 8, 3};
    int k = 3;

    int sum = getMaxSubarraySumsOfSizeK(numbers, k);
    if(sum == LLONG_MIN) cout<<"invlaid k";

    cout<<sum<<endl;

    return 0;

}