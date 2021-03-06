#include "bits/stdc++.h"
using namespace std;
#define pii pair<int,int> 

void helper(int r,int c, vector<vector<char>> &a, map<pair<int,int>,map<int,int>> &mp, vector<map<int,int>>&row ,vector< map<int,int>> &col){

    if(r==9){
        for(int l=0; l<9; l++){
            for(int m=0; m<9; m++){
                cout<<"|"<<a[l][m]<<"|";
            }
            cout<<endl;
        }
        cout<<endl;
        return;
    }
    if(c==9){
        helper(r+1,0,a,mp,row,col);
        return;
    }
    if(a[r][c]!='.'){
        helper(r,c+1,a,mp,row,col);
        return;
    }

    for(int k=1; k<=9; k++){
        if(!mp[{r/3,c/3}][k] && !row[r][k] && !col[c][k]){
            mp[{r/3,c/3}][k]=1;
            row[r][k]=1;
            col[c][k]=1;
            a[r][c]=k+'0';
            helper(r,c+1,a,mp,row,col);
            mp[{r/3,c/3}][k]=0;
            row[r][k]=0;
            col[c][k]=0;
            a[r][c]='.';
        }
    }
    
}


void sudoku_solver(vector<vector<char>>&a){
    map<pii,map<int,int>>mp;
    vector<map<int,int>>row(9);
    vector<map<int,int>>col(9);

    for(int i=0; i<9; i++){
        for(int j=0; j<9; j++){
            if(a[i][j]!='.'){
                mp[{i/3,j/3}][a[i][j]-'0']=1;
                row[i][a[i][j]-'0']=1;
                col[j][a[i][j]-'0']=1;
            }
        }
    }
    helper(0,0,a,mp,row,col);
}
int main(){
    vector<vector<char>>sudoku={
        {'5','3','.','.','7','.','.','.','.'},
        {'6','.','.','1','9','5','.','.','.'},
        {'.','9','8','.','.','.','.','6','.'},
        {'8','.','.','.','6','.','.','.','3'},
        {'4','.','.','8','.','3','.','.','1'},
        {'7','.','.','.','2','.','.','.','6'},
        {'.','6','.','.','.','.','.','8','.'},
        {'.','.','.','4','1','9','.','.','5'},
        {'.','.','.','.','8','.','.','7','9'}
    };
    sudoku_solver(sudoku);
    
    return 0;
}