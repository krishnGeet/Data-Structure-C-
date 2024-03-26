#include <iostream>
using namespace std;

void BubbleSort(int a[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            if (a[j] > a[j + 1] && j < n)
            {
                int temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;

                for (int k = 0; k < n; k++)
                {
                    cout << a[k] << " ";
                }
                cout << endl;
            }
        }
    }
}

int main()
{
    int a[] = {10, 9, 8, 7, 6, 5, 4, 3, 2, 1};
    BubbleSort(a, 10);
}