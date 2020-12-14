#include<iostream>
using namespace std;
int main(){
    char a[]={'a','b','c','\0'};
    cout<<a<<endl;

    //Input
    char s[10];
    cin>>s;
    cout<<s;

    char s1[]={'h','e','l','l','o'};
    char s2[]="hello";
    cout<<s1<<" "<<sizeof(s1)<<endl; //5 bytes
    cout<<s2<<" "<<sizeof(s2)<<endl; // 6 bytes
    return 0;
}