#include <iostream>
using namespace std;

int main(){
    int A[5]={2,4,6,8,10};
    int *p;
    p=A;

    int *q;
    q=new int[5];   //dynamically allocating memory in heap
    q[0]=10; q[1]=15; q[2]=14; q[3]=21; q[4]=21;

    for (int i=0; i<5; i++){
        cout<<A[i]<<endl;
    }

    for (int i=0; i<5; i++){
        cout<<p[i]<<endl;
    }

    for (int i=0; i<5; i++){
        cout<<q[i]<<endl;
    }

    delete [] q;  //release the memory -- free(q) in C lang

    return 0;
}