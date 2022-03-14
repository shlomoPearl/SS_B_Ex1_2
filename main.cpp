#include<iostream>
#include"mat.hpp"
#include"mat.cpp"
#include<string>
#include<vector>

int main(){
    using namespace ariel;
    using namespace std;
    int row = 3;
    int column = 3;
    string a = mat(column,row,'%','-');
    for(int i = 0 ; i< a.size(); i++){
        cout << a.at(i);
    }
    cout << "shlomo\n";
    return 0;
}