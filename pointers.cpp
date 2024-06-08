#include <iostream>
using namespace std;

int main(){
    int a=10;
    int *p;
    p=&a;

    cout<<a<<endl;
    cout<<*p<<endl;    //dereferencing pointer 
    return 0;
}