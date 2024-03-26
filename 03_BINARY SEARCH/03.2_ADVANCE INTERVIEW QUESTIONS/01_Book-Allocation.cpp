#include<iostream>
#include<vector>
using namespace std;

bool isSolution(vector<int> &a, int n, int b, int mid)
{
	int pageCount = 0;
	int studentCount = 1;

	for(int i = 0; i < n; i++)
	{
		if(pageCount + a[i] <= mid)
		{
			pageCount += a[i];
		}
		else
		{
			studentCount++;
			if(studentCount > b || a[i] > mid)
			{
				return false;
			}
			pageCount = a[i];
		}
	}
	return true;
}

int allocateBooks(vector<int> &pages, int n, int b)
{
	// Write your code here.
	int s = 0;
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum += pages[i];
	}
	int e = sum;
	int mid = s + (e - s) / 2;
	while(s <= e)
	{
		if(isSolution(pages, n, b, mid))
		{
			e = mid - 1;
		}
		else
		{
			s = mid + 1;
		}
		mid = s + (e - s) / 2;
	}
}
int main(){
    vector<int> a = {10, 20, 30, 40};
    cout << allocateBooks(a, 4, 2);

}