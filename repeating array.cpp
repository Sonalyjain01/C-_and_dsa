#include <bits/stdc++.h>
using namespace std;
  
int main()
{
    int a[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int arr_size = sizeof(a) / sizeof(a[0]);
    // count the frequency
    for (int i = 0; i < arr_size; i++) {
        a[a[i] % arr_size]	
            = a[a[i] % arr_size] + arr_size;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < arr_size; i++) {
        if (a[i] >= arr_size * 2) {
            cout << i << " " << endl;
        }
    }
    return 0;
}
