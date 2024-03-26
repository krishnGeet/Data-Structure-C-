// BINARY AND DECIMAL CONVERSION VICE VERSA

#include<iostream>
#include<cmath>
using namespace std;

// CONVERTING POSITIVE NUMBER TO BINARY 
int decBin(int dec){
    int ans = 0;
    int i = 0;
    while(dec > 0){
        int digit = dec & 1;
        ans = digit * pow(10, i) + ans;
        dec = dec >> 1;
        i++;
    }
    return ans;
}

// CONVERTING NEGATIVE NO TO BINARY

// CONVERTING BINARY NUMBER TO DECIMAL
int binDec(int bin){
    int ans = 0;
    int i = 0;
    while(bin != 0){
        int digit = bin % 10;
        ans = digit * pow(2, i) + ans;
        bin = bin / 10;
        i++;
    }
    return ans;
}

int main(){
    int dec;
    cout << "Enter any decimal value" << endl;
    cin >> dec;

    cout << "Binary representation of entered number is" << decBin(dec) << endl;

    int bin;
    cout << "Enter binary number " << endl;
    cin >> bin;
    cout << "Decimal representatio of entered number is " << binDec(bin) << endl;
} 