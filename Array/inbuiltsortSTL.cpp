#include<iostream>
#include<Algorithm>
using namespace std;
// comparator function
bool comparator(int a,int b){
    cout<<"comparing"<<a<<"and"<<b<<endl;
}
int main(){
    int n;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    //sort an array using sort() function
    sort(a, a+n, comparator);
    for(int i=0;i<n;i++){
        cout<<a[i]<<",";
    }


    return 0;
}