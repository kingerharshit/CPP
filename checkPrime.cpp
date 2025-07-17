#include<iostream>
using namespace std;
int main(){
    int number;
    bool isPrime = true;

    cout << "Enter the number:";
    cin >> number;

    if(number<=1){
        isPrime = false;
    }
    else if(number == 2){
        isPrime = true;
    }
    else if(number % 2 ==0){
        isPrime = false;
    }

    else{
        for(int i =3 ; i*i <= number ; i+2){
            if(number%i == 0){
                isPrime = false;
            }
        }
    }
    if(isPrime){
        cout<<number<<" is a prime Number"<<endl;
    }
    else{
        cout << number << " is not a prime number"<<endl;
    }
}
