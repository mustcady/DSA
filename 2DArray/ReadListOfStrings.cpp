#include<iostream>
using namespace std;
int main(){
    char a[100][100];
    //read a list of string and store in 2d array
    int n;
    cin>>n;
    cin.get();
    for(int i=0;i<n;i++){
        cin.getline(a[i],1000);

    }
    // print out all string
    for(int i=0;i<n;i++){
        cout<<a[i]<<endl;
    }


    return 0;
}