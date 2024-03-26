#include<iostream>
using namespace std;

int searchRotated(int a[], int n, int k)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if(a[mid] <= a[0])
        {
            e = mid;
        }

        else 
        {
            s = mid + 1;
        }                           
        mid = s + (e - s) / 2;
    }

    if(k >= a[s] && k <= a[n - 1]){
        int st = s;
        int en = n - 1;
        int mid2 = st + (en - st) / 2;
        int ans = -1;
        while (st < en)
        {
            if(a[mid2] == k)
            {
                return mid2;
            }

            else if(a[mid2] > k)
            {
                en = mid2 - 1;
            }
            else
            {
                st = mid2 + 1;
            }
            mid2 = st + (en - st) / 2;
        }
    // return ans;
        
    }
    else
    {
        int st = 0;
        int en = s - 1;
        int mid2 = st + (en - st) / 2;
        int ans = -1;
        while (st < en)
        {
            if(a[mid2] == k)
            {
                return mid2;
            }

            else if(a[mid2] > k)
            {
                en = mid2 - 1;
            }
            else
            {
                st = mid2 + 1;
            }
            mid2 = st + (en - st) / 2;
        }
    // return ans;

    }
}            

int main(){
    int a[] = {5, 6, 7, 1, 2, 4};  
    cout << searchRotated(a, 6, 4);
}