#include<bits/stdc++.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;
};

void initialization(struct rectangle *r){
    r->length=10;
    r->breadth=5;
}

int area(struct rectangle r){
    return r.length*r.breadth;
}

int main(){
    struct rectangle r1;
    initialization(&r1);
    cout<<area(r1)<<endl;

    return 0;
}