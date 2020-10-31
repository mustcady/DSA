#include <iostream>
using namespace std;
int main(){
     int n;
    cin>>n;
    int a[1000];
    int maximumSum=0;
    int currentSum=0;
    int left=-1;
    int right=-1;
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    // Generate all subarryas
    for(int i=0;i<n;i++){
        for(int j=i;j<n;j++){

            // Elements of subarrays(i,j)
            currentSum=0;
            for(int k=i;k<=j;k++){
                currentSum+=a[k];
            }
            // update maximum sum if cs> maxsum
            if(currentSum>maximumSum){
                maximumSum=currentSum;
                left=i;
                right=j;
            }
        }
    }
    //print the maximum sum
    cout<<"MaximumSum is:"<<maximumSum<<endl;
    // print the subarray
    for(int k=left;k<=right;k++){
        cout<<a[k]<<",";
    }






    return 0;
}