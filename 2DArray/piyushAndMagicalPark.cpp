#include<iostream>
using namespace std;
void magicalPark(char a[][100],int m,int n,int k,int s){
    // piyush can get out of the park
    bool success=true;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            char ch=a[i][j];

            if(s<k){
                success=false;
                break;
            }
            if(ch=='*'){
                s+=5;
            }
            else if(ch=='.'){
                s-=2;
            }
            else{
                break;
            }
            // Also loose 1 point while moving right except for the last col
            if(j!=n-1){
                s--;
            }
        }
    }
    if(success){
        cout<<"Yes"<<endl;
        cout<<s<<endl;
    }
}
int main(){
    int m,n,k,s;
    cin>>m>>n>>k>>s;
    char park[100][100];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>park[i][j];
        }
    }
    magicalPark(park,m,n,k,s);
    return 0;
}

/*  . . * .
    . # . .
    * * . .
    . # * *

*/