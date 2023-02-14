#include<bits/stdc++.h>

using namespace std;

//get array as parameter
void fun(int *a,int n){
    a[0]=15;
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;

}

//return an array
int * fun2(int n){
    int *p;
    //p=(int *)malloc(n*sizeof(int)); --> this is for C
    p=new int[n];
    for(int i=0;i<n;i++){
        cin>>p[i];
    }
    return p;
}

int main(){
    int arr[5]={8,4,6,3,5};
    fun(arr,5);


    int* q;
    q=fun2(5);
    for(int i=0;i<5;i++){
        cout<<q[i]<<" ";
    }
    cout<<endl;

    return 0;
}