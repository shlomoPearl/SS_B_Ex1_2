#include <string>
#include <iostream>
#include <vector>
#include <stdexcept>
#include "mat.hpp"

using namespace std;
const int lowRange = 33;
const int highRange = 126;
namespace ariel{
    string mat(int column, int row, char c1, char c2){
        if(column % 2 == 0 || row % 2 == 0){
            throw("Mat size is always odd");
        }
        if (column < 0 || row < 0){
            throw("Mat size is positive");
        }
        if (c1 < lowRange or c2 < lowRange or c1 > highRange or c2 > highRange){
            throw("Bad char");
        }
        
        vector< vector <char> > mat(row ,vector<char>(column)); 
        char current_char = c1;
        int i = 0;
        int j = 0;
        if (row == 1){
            string ans;
            for(int i=0 ;i< column;i++){
                ans += c1;
            }
            return ans;
        }
        if (column == 1){
            string ans;
            for(int i=0 ;i< row;i++){
                ans += c1;
                ans += '\n';
            }
            return ans;
        }
        for ( i = 0; i <= row / 2; i++){
            if (i % 2 == 0){
                mat = fillFrame(i, mat,c1);
            }
            else{
                mat = fillFrame(i, mat,c2);
            }
        }
        string ans;
        for( i=0; i< row; i++){
            for ( j = 0; j < mat.at(0).size(); j++){
                ans += mat[i][j];
            }
            ans += '\n';
        }
        return ans;
    }
    vector< vector <char> > fillFrame (int index ,vector<vector<char>> a , char c){
        int row = a.size();
        int column = a[0].size();
        int i = 0;
        for (i = index; i < column - index; i++){
            a[index][i] = c ;
        }
        for (int i = index + 1; i < row - index; i++){
            a[i][column - 1 - index] = c;
        }
        for (int i = index + 1; i < column - index; i++){
            a[row - 1 - index][column - 1 - i] = c;
        }
        for (int i = index + 1; i < row - index - 1; i++){
            a[row - 1 - i][index] = c;
        }
        return a;
    }
}

