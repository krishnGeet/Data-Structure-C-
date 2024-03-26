#include<iostream>
using namespace std;

void swapAlt(int a[], int n){
    int i = 0;
    while(i + 1 < n){
        int temp = a[i];
        a[i] = a[i + 1];
        a[i + 1] = temp;
        i = i + 2; 
    }
}

int main(){
    int a[] = {1, 2, 4, 5, 5, 6, 7, 8, 10};
    cout << "Orignal array was" << endl;
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
    swapAlt(a, 8);
    cout << "Array after alternate swap" << endl;
    for(int i : a){
        cout << i << " ";
    }
}