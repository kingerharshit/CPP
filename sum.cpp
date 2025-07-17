// #include<iostream>
// using namespace std;
// int main(){

//     int n;
//     int sum =0;
//     cout << "Enter numbers:";
//     cin >> n;

//     for(int i=1;i<=n;i++){
//         sum = sum + i;
//     }
//     cout << "sum is:" << sum;
// }

#include<iostream>
using namespace std;

int main() {
    
    int sum = 0;

    for (int i = 1; i <= 5; i++) {
        sum = sum + i;
    }

    cout << "Sum is: " << sum;

    return 0;
}
