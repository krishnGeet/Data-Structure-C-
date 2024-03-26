#include<iostream>
using namespace std;


// Calculate the product of digits of no
int product(int n){
    int product = 1;

    while (n > 0){
        int rem = n % 10;
        product *= rem;
        n /= 10;
    }

    return product;
    
}

// Calculate the sum of digits of entered no
int sum(int n){
    int sum = 0;

    while(n > 0){
        int rem = n % 10;
        sum += rem;
        n /= 10;
    }

    return sum;
}

int main(){
    int n;
    cout << "Enter the value of n" << endl;
    cin >> n;

    cout << "Product  of digits of entered number is " << product(n) << endl << 
            "Sum of digits of entered number is "      << sum(n) << endl;
}