#include<bits/stdc++.h>
using namespace std;

// FINDING AN ELEMENT AT GIVEN ROW AND COLUMN IN PASCAL TRIANGLE

// int PascalTriangle(int n, int r){
//   int ans=1;
//   for(int i=0; i<r; i++){
//     ans=ans*(n-i);
//     ans=ans/(i+1);
//   }
//   return ans;
// }



// int main(){
//     int r;
//     cin>>r;
//     int c;
//     cin>>c;
//     int b=PascalTriangle(r-1, c-1);
//     cout<<b;
//     return 0;
// }

vector<int> PascalTriangle(int r){
    int ans=1;
    vector<int> ans_row;
    ans_row.push_back(1);
    for(int c=1; c<r; c++){
        ans=ans*(r-c);
        ans=ans/c;
        ans_row.push_back(ans);
    }
    return ans_row;
}

void printPascalTriangle(vector<vector<int>> ans){
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<=i; j++){
            cout<<ans[i][j]<<" ";
            
        }
        cout<<endl;
    }
}

int main(){
    int r;
    cin>>r;
    vector<vector<int>> ans;
    for(int i=1; i<=r; i++){
        vector<int> b=PascalTriangle(i);
        ans.push_back(b);
         
        // for(int j=0; j<b.size(); j++){
        //     cout<<b[j]<<" ";
        // }
        // cout<<endl;
    }
    printPascalTriangle(ans);
    return 0;
    
    
}