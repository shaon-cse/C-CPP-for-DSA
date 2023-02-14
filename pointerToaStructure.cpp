#include<bits/stdc++.h>

using namespace std;

struct rectangle{
    int length;
    int breadth;
};

int main(){
    int *p;
    p=new int[sizeof(struct rectangle)];
    p->length=15;
    p->breadth=10;
    return 0;
}