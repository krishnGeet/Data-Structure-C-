#include<iostream>
using namespace std;

int countOne(int n){
    int count = 0;
    while (n != 0)
    {
        if(n & 1){
            count++;
        }
        n = n >> 1;
    }
    return count;
}

int main(){
    int n;
    cout << "enter any number" << endl;
    cin >> n;

    cout << "no of ones in the binary representation of n is " << countOne(n) << endl;
}