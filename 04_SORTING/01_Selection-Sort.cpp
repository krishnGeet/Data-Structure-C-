#include<iostream>
using namespace std;

void selectionSort(int a[], int n)
{
    for(int i = 0; i < (n - 1); i++)
    {
        int minIdx = i;
        for(int j = i + 1; j < n; j++)
        {
            if(a[j] < a[minIdx])
            {
                minIdx = j;
            }
        }
        if(minIdx != i)
        {
            int temp = a[i];
            a[i] = a[minIdx];
            a[minIdx] = temp;
        }
    }
}

int main(){
    int a[] = {4, 1, 3, 9, 7};
    selectionSort(a, 5);
    for(int i : a)
    {
        cout << i << " ";
    }
}