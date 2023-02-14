#include<bits/stdc++.h>
using namespace std;

int main(){
    int a=10;

    int &r=a;

    r=20;

    cout<<a<<endl;//20
    cout<<r<<endl;//20

    return 0;
}