#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << " Enter value of a:";
    cin >> a;
    cout << " Enter value of b:";
    cin >> b;
    cout << " Enter value of c:";
    cin >> c;

    if(a>b && a>c){
        cout << "Largest value is : " << a;
    }
    else if (b>c && b>a){
        cout << "Largest value is:" << b;
    }
    else{
        cout << " Largest value is: " <<  c;
    }

    


}