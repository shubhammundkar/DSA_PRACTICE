#include <iostream>
#include <vector>

using namespace std;

vector<double> getSubarrayAvgSumsOfSizeK(const vector<int>& arr, double k){
    vector<double> results;

    if(k>arr.size() || k<=0) return results; // edge case invalid k;

    double currentSum = 0;
    for(int i=0;i<k;i++){ // first-> sum of first k elements;
        currentSum+=arr[i];
    }
    results.push_back(currentSum/k);


    for(int i=k;i<arr.size();i++){// sliding window of k elements accross the arr:
        currentSum+=arr[i] - arr[i-k];
        results.push_back(currentSum/k);
    }
    return results;
}
int main() {
    vector<int> numbers = {2, 5, 1, 8, 3};
    int k = 3;

    vector<double> sums = getSubarrayAvgSumsOfSizeK(numbers, k);

    // Output: 8 14 12
    for (double s : sums) {
        cout << s << " ";
    }
    return 0;
}