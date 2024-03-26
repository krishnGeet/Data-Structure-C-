#include<iostream>
using namespace std;

int binarySearch(int a[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    int ans = -1;

    while(s <= e)
    {
        if(a[mid] == k)
        {
            return mid;
        }
        else if(a[mid] < k)
        {
            s = mid + 1;
        }
        else
        {
            e = mid - 1;
        }
        mid = s + (e - s) / 2;
    }
    return ans;
}

int main(){
    int a[] = {1, 2, 5, 6, 7, 8, 9, 10, 11, 55, 100};
    cout << binarySearch(a, 11, 50);
}