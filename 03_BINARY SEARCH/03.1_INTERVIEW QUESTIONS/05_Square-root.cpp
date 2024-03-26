#include<iostream>
#include<cmath>
using namespace std;


double morePrecise(int n, int temp, int precision){

    int factor = 1;
    int j = 0;
    for(int i = 1; i <= precision; i++){
       

    }
}

int squareRoot(int n)
{
    int s = 1;
    int e = n;
    int mid = s + (e - s) / 2;
    int ans = -1;
    while(s <= e)
    {
        if(mid * mid == n)
        {
            return mid;
        }

        else if(mid * mid > n)
        {
            e = mid - 1;
        }

        else
        {
            ans = mid;
            s = mid + 1;
        }
        mid = s + (e - s) / 2;
    }
    morePrecise(n, ans, 3);
}

int main(){
    cout << squareRoot(94);
}