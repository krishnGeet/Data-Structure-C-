#include<iostream>
#include<algorithm>
using namespace std;

int main(){
    int a1[5] = {0}; // initializing with 0
    int a[100];
    fill(a, a + 100, 1); // initialize an ayyay with any walue
    // fill(start add, end add, value)
    for(int i : a){
        cout << i << " ";
    }
}