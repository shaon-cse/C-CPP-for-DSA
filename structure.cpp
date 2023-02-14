#include<bits/stdc++.h>
using namespace std;

struct rectangle{
    int length;
    int breadth;
}r3,r4;

struct rectangle r2;

int main(){
    struct rectangle r1;
    int a=r1.length=40;
    int b=r1.breadth=20;

    cout<<a*b<<endl;//800

    int c=r2.length=50;
    int d=r2.breadth=30;

    int e=r3.length=50;
    int f=r4.breadth=30;

    struct rectangle r[3]={{40,20},{20,10},{60,30}};
    cout<<r[0].length<<endl;//40
    cout<<r[1].breadth<<endl;//10
    return 0;
}