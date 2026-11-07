#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> rowWiseTraversal(vector<vector<int>>& matrix){
        vector<int> res;
        int row = matrix.size();
        int col = matrix[0].size();
        int total = row * col;
        //can be used in binary seatch in matrix
        for(int i=0;i<total-1;i++){
            res.push_back(matrix[i/col][i%col]);
        }
        return res;
    }
};

int main() {
    Solution solver;

    // Define a sample 3x3 matrix
    // [ 1, 2, 3 ]
    // [ 4, 5, 6 ]
    // [ 7, 8, 9 ]
    vector<vector<int>> matrix = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    vector<int> output = solver.rowWiseTraversal(matrix);
    cout<<"rowsie traversal output "<<endl;
    for(int c:output){
        cout<<c<<" ";
    }

    return 0;
}
