#include <iostream>
using namespace std;

int peakMountain(int a[], int n)
{
    int s = 0;
    int e = n - 1;
    int mid = s + (e - s) / 2;
    while (s < e)
    {
        if(a[mid] < a[mid + 1])
        {
            s = mid + 1;
        }

        else
        {
            e = mid;
        }
        mid = s + (e - s) / 2;
    }
    return s;
}

int main()
{
    int a[] = {1, 2, 3, 4, 5, 6, 7, 4, 3, 2, 1};
    cout << peakMountain(a, 11); 
}