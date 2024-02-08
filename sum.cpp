#include<iostream>
using namespace std;

int addition(int a,int b) {
    return a + b;
}
int subtraction(int a,int b) {
    return a - b;
}

int main() {
    int a = 10;
    int b = 20;
    int sum = addition(a,b);
    int sub = subtraction(b,a);
    cout<<"Addition is:"<<sum<<endl;
    cout<<"Subtraction is:"<<sub<<endl;

    return 0;
}