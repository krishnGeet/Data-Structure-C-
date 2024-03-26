#include<iostream>
using namespace std;

void revArr(int a[], int n){
    int start = 0;
    int end = n - 1;

    while(start < end){
        int temp = a[start];
        a[start] = a[end];
        a[end] = temp;

        start++;
        end--;
    }
}

int main(){
    int a[] = {1, 2, 4, 5, 5, 6, 7, 8};
    cout << "Orignal array was" << endl;
    for(int i : a){
        cout << i << " ";
    }
    cout << endl;
    revArr(a, 8);
    cout << "Reversed array is " << endl;
    for(int i : a){
        cout << i << " ";
    }
}