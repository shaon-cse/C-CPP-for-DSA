#include<bits/stdc++.h>

using namespace std;

int area(struct rectangle *r1){
    int a= (r1->length)*(r1->breadth);
    return a;

}

struct rectangle{
    int length;
    int breadth;

};

int main(){
    struct rectangle r={10,5};
    cout<<area(&r)<<endl;

}