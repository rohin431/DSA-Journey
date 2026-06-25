#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
    void rotate(vector<vector<int>>& matrix) {
        int n = matrix.size();

        // Transpose
        for (int i = 0; i < n; i++) {
            for (int j = i + 1; j < n; j++) {
                swap(matrix[i][j], matrix[j][i]);
            }
        }

        // Reverse each row
        for (int i = 0; i < n; i++) {
            reverse(matrix[i].begin(), matrix[i].end());
        }
    }

    int main(){
        vector<vector<int>>ans={{1,2},{3,4}};
        rotate(ans);
        return 0;
    }