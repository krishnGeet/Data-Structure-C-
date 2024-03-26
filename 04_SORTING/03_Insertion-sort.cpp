#include<iostream>
using namespace std;

void insertionSort(int a[], int n)
{
    for(int i = 1; i < n; i++)
    {
        int currElement = a[i];
        int j = i - 1;
        while(j >= 0 && a[j] > currElement)
        {
            j--; 
        }
        j = j + 1;
        int temp = a[j];
        a[j] = a[i];
        a[i] = temp;
    }
}

int main(){
    int a[] = {4, 1, 3, 9, 7};
    insertionSort(a, 5);

    for(int i: a)
    {
        cout << i << " ";
    }
}