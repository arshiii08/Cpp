#include <iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter size:";
    cin>>n;
    int B[n];
    B[0]=2;
    int A[]={2,4,6,8,10};

    cout<<sizeof(A)<<endl;
    cout<<A[1]<<endl;
    printf("%d\n",A[2]);

    for(int i=0; i<10; i++){
        cout<<A[i]<<endl;
    }

    for(int x:A){
        cout<<x<<endl;
    }

    return 0;
}