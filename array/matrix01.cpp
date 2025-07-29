#include<iostream>
#include<vector>

using namespace std;

int main(){
    vector<vector<int>> matrix = {
        {1, 0, 1},
        {1, 1, 1},
        {1, 1, 1}
    };

    int col = 1;
    int n = matrix.size();
    int m = matrix[0].size();

    // Step 1: Mark rows and columns to be zeroed
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            if(matrix[i][j] == 0){
                matrix[i][0] = 0;
                if(j != 0)
                    matrix[0][j] = 0;
                else
                    col = 0;
            }
        }
    }

    // Step 2: Set matrix cells to 0 based on markers
    for(int i = 1; i < n; i++){
        for(int j = 1; j < m; j++){
            if(matrix[i][0] == 0 || matrix[0][j] == 0){
                matrix[i][j] = 0;
            }
        }
    }

    // Step 3: Handle first row
    if(matrix[0][0] == 0){
        for(int j = 0; j < m; j++) matrix[0][j] = 0;
    }

    // Step 4: Handle first column
    if(col == 0){
        for(int i = 0; i < n; i++) matrix[i][0] = 0;
    }

    // Step 5: Print the result
    for(int i = 0; i < n; i++){
        for(int j = 0; j < m; j++){
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
