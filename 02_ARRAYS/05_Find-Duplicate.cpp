// GIVEN AN ARRAY OF SIZE N IN WHICH THE ELEMENT RANGES FROM [1 TO N - 1] AND ONE OF THE ELEMENT IS REPEATED TWICE, FIND THAT DUPLICATE ELEMENT

#include<iostream>
using namespace std;

int findDuplicate(int a[], int n){
    int ans = 0;
    
    for(int i = 0; i < n; i++){
        ans = ans ^ a[i];
    }

    for(int i = 1; i < n; i++){
        ans = ans ^ i;
    }

    return ans;
}

int main(){
    int a[] = {1, 2, 3, 4, 5, 6, 7, 3};
    cout << "Duplicate element in the array is " << findDuplicate(a, 8);
    return 0;
}
