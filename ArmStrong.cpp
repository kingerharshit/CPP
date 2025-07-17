#include<iostream>
using namespace std;
int main(){
    int num , original , digit , sum =0;
    cout<<"Enter number:";
    cin >> num;

    original = num ; 
    while(num!=0){
        digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;

    }

    if(sum == original){
        cout << original << " is an armstrong number";
    }
    else{
        cout << original << " is not an armstrong number";
    }
}