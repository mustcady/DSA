#include <iostream>
using namespace std;

int main() {
    int n, key;
    cin>>n;
    int a[1000];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }

    cout<<"Enter element to search";
    cin>>key;

    // linear search algo
    int i;
    for(int i=0;i<=n-1;i++){
        if(a[i]==key){
            cout<<key<<"found at "<<i<<"index";
            break;
        }
    }
    if(i==n){
        cout<<key<<"is not found";
    }

    return 0;
}