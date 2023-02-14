#include<bits/stdc++.h>

using namespace std;

class rectangle{

private:
    int length;
    int breadth;
public:

void initialize(){
    length=10;
    breadth=5;
};

int area(){
    return length*breadth;
}
};


int main(){
    rectangle r1;
    r1.initialize();
    cout<<r1.area()<<endl;

    return 0;
}