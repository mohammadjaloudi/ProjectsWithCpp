#include<iostream>
#include<string>
#include<vector>
using namespace std;
int main(){
    cout<<"Rock paper scissors game"<<endl;
    cout<<"Choose: 0. rock 1. papper 2. scissors"<<endl;
    cout<<"*Note you must choose a number (0, 1, 2)"<<endl;
    int n;
    cin>>n;
    if(n>2){
        cout<<"This number is out of range"<<endl;
        return 0;
    }
    vector<string> a = {"rock", "paper", "scissors"};
    vector<string> v = {"paper", "scissors", "rock"};
    cout<<"You choose: "<<a[n]<<endl;
    cout<<"I choose: "<<v[n]<<endl;
    cout<<"You lost, I won"<<endl;
    return 0;
}
