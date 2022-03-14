#include<iostream>
#include"mat.hpp"
#include<string>
#include<vector>

int main(){
    using namespace ariel;
    using namespace std;
    int row = 7;
    int column = 7;
    string a = " ";
    a = mat(column,row,'*','-');
    for(int i = 0 ; i< a.size(); i++){
        cout << a.at(i);
    }
    return 0;
}