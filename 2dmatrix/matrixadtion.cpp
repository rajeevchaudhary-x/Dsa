// sum of 2d  matrix 🐥🐥🐥🐥🐥🐥🐥🐥🐥
// get largest number from each row and return sum 
#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<vector<int>> matrix1={
      {7,2,1},
      {6,4,2},
      {6,5,3},
      {3,2,1},
    };
vector<int> ans;
int numstobeadded=0;
int row = matrix1.size();
int col = matrix1[0].size();
 
for(int j =0;j<col;j++){  
for(int i=0;i<row;i++){
    int temp = matrix1[i][j];
  
    if(temp>=numstobeadded){
        numstobeadded = temp;
      
    }
}

ans.push_back(numstobeadded);
numstobeadded = 0;
}
int sum = 0;
for(int i=0;i<ans.size();i++){
   sum+=ans[i];
}

cout<<"sum of 2d array is "<<sum;
}