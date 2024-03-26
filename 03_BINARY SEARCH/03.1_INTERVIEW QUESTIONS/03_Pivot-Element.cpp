//YOU ARE GIVEN A SORTED AND THE ROTATED ARRAY YOU HAVE TO FIND THE PIVOT ELEMENT(IN THIS PIVOT MEANS SMALLES ELEMENT IN THE FINAL ARRAY)

#include<iostream>
using namespace std;

int pivotElement(int a[], int n)
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
    return s;
}

int main(){
    int a[] = {5, 6, 7, 1, 2, 4};

    cout << pivotElement(a, 6);
}