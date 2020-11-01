#include<iostream>
using namespace std;

int main(){
    int m,n;
    cin>>m>>n;
    int a[m][n]={0};
  
    // Iterate over the array
    int val=1;
    for(int row=0;row<=m-1;row++){
        for(int col=0;col<=n-1;col++){
            a[row][col]=val;
            val=val+1;
            cout<<a[row][col]<<" ";

        }
        cout<<endl;

    }
  // wave print
    for(int col=0;col<n;col++){
        if(col%2==0){
            for(int row=0;row<m;row++){ // even= top down
                cout<<a[row][col]<<" ";
            }
        }
        else{
            for(int row=m-1;row>=0;row--){  // odd=bottom up
                cout<<a[row][col]<<" ";
            }
        }
    }

    return 0;
}