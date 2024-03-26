#include<iostream>
using namespace std;

int main(){
    cout << "Enter the value of character" << endl;
    char ch = cin.get();
    int ascii = ch;
    
    if(ascii >= 48 && ascii <= 57){
        cout << "entered charater is numeric" << endl;
    }

    else if(ascii >= 65 && ascii <= 90){
        cout << "Entered character is upper case alphabet" << endl;
    }

    else if(ascii >= 48 && ascii <= 122){
    cout << "Entered number is lower case alphabet" << endl;
    }

    else {
        cout << "Entered number is a special character" << endl;
    }



}