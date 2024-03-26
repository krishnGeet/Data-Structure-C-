// GIVEN A SORTED ARRAY YOU HAVE TO FIND OUT FIRST AND LAST OCCURENCE OF AN ELEMENT
#include<iostream>
using namespace std;

int firstOccur(int a[], int n, int k){
    int s = 0; 
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s < e){
        if(a[mid] == k){
            ans = mid;
            e = mid - 1;
        }

        else if(a[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int lastOccur(int a[], int n, int k){
    int s = 0; 
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e){
        if(a[mid] == k){
            ans = mid;
            s = mid + 1;
        }

        else if(a[mid] > k){
            e = mid - 1;
        }
        else{
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int a[] = {1, 2, 3, 3, 3, 4, 5, 5, 6, 8, 9, 9, 10, 10};
    cout << "First and last occurence of 3 is " << firstOccur(a, 14, 3) << " " << lastOccur(a, 14, 3);
}    