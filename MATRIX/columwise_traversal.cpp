#include<iostream>
#include<vector>

using namespace std;

class Solution {
public:
    vector<int> colWiseTraversal(vector<vector<int>>& matrix){
        vector<int> res;

        if(matrix.empty() || matrix[0].empty() ) return res;
        for(int j=0;j<matrix[0].size();j++){
            for(int i=0;i<matrix.size();i++){
                res.push_back(matrix[i][j]);
            }
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

    vector<int> output = solver.colWiseTraversal(matrix);
    cout<<"colsie traversal output "<<endl;
    for(int c:output){
        cout<<c<<" ";
    }

    return 0;
}
