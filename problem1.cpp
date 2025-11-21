#include <iostream>
using namespace std;
#define val 33.3;
#define number 50;
int a;
int& fun(){
    return a;
}
int foo(){
    return a;
}
int main() {
    int n1=9,n2=11, *ptr_1= nullptr, *ptr_2= nullptr, k=0;
    double t;
    ptr_1=&n2;
    ptr_2=&n1;
    t=val-1;
    k=n1-1;
    fun()=number;
    cout<<a<<" "<<*ptr_1+1<<" "<<t<<" "<<k<<endl;
}
