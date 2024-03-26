// GIVEN AN ARRAY OF SIZE N = 2M + 1 SUCH THAT THERE ARE M NUMBERS IN ARR REPEATED TWO TIMES AND ONE NUMBER REPEATED ONE TIMES FIND THAT UNIQUE NUMBER

#include<iostream>
using namespace std;

int findUnique(int a[], int n){
    int ans = 0;
    for(int i = 0; i < n; i++){
        ans = ans ^ a[i];
    }
    return ans;
}

int main(){
    int a[] = {2, 5, 7, 3, 7, 5, 2, 3, 10};
    cout << "Unique element in the array is " << findUnique(a, 9);
}