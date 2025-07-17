// #include<iostream>
// using namespace std;

//     int FindLargest(int a, int b, int c){
//         if(a>=b && a>=c) return a;
//         else if(b>=a && b>=c) return b;
//         else return c;
//     }

//     int FindSmallest(int a , int b, int c){
//         if(a<=b && a<=c) return a;
//         else if(b<=a && b<=c) return b;
//         else return c;
//     }

//     void SortAscending(int a, int b, int c){
//         if(a<=b && a<=c){
//             cout << a << "," << b <<","<<c;
//         }
//         else if (a <= c && c <= b)
//         cout << a << ", " << c << ", " << b;
//         else if (b <= a && a <= c)
//         cout << b << ", " << a << ", " << c;
//         else if (b <= c && c <= a)
//         cout << b << ", " << c << ", " << a;
//         else if (c <= a && a <= b)
//         cout << c << ", " << a << ", " << b;
//         else
//         cout << c << ", " << b << ", " << a;
//     }
//     void sortDescending(int a, int b, int c) {
//     if (a >= b && b >= c)
//         cout << a << ", " << b << ", " << c;
//     else if (a >= c && c >= b)
//         cout << a << ", " << c << ", " << b;
//     else if (b >= a && a >= c)
//         cout << b << ", " << a << ", " << c;
//     else if (b >= c && c >= a)
//         cout << b << ", " << c << ", " << a;
//     else if (c >= a && a >= b)
//         cout << c << ", " << a << ", " << b;
//     else
//         cout << c << ", " << b << ", " << a;
// }
// int main() {
//     int a, b, c;
//     cout << "Enter three integers: ";
//     cin >> a >> b >> c;

//     cout << "\nLargest: " << FindLargest(a, b, c);
//     cout << "\nSmallest: " << FindSmallest(a, b, c);

//     cout << "\n\nAscending order: ";
//     SortAscending(a, b, c);

//     cout << "\nDescending order: ";
//     sortDescending(a, b, c);

//     return 0;
// }

// #include<iostream>
// using namespace std;
// int main(){
//     int a,b,c;
//     cout << "Enter Integers:";
//     cin >> a >> b >>c;

//     int Largest;
//     if(a>=b && a>=c){
//         Largest = a;
//     }
//     else if(b>=a && b>=c){
//         Largest = b;
//     }
//     else{
//         Largest = c;
//     }

//     int smallest;
//     if (a <= b && a <= c){
//         smallest = a;
//     }
//     else if (b <= a && b <= c){
//         smallest = b;
//     }
//     else{
//         smallest = c;
//     }
//      if (a > b)
//         swap(a, b);
//     if (b > c)
//         swap(b, c);
//     if (a > b)
//         swap(a, b);

//     cout << "\nSmallest number: " << smallest << endl;
//     cout << "Largest number: " << Largest << endl;

//     cout << "\nAscending order: " << a << ", " << b << ", " << c << endl;
//     cout << "Descending order: " << c << ", " << b << ", " << a << endl;
// }

#include<iostream>
using namespace std;
int main(){
    
}