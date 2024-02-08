#include<iostream>
using namespace std;

int addition(int a,int b) {
    return a + b;
}

int main() {
    int a = 10;
    int b = 20;
    int sum = addition(a,b);
    cout<<"Addition is:"<<sum<<endl;
    return 0;
}