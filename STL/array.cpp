#include <bits/stdc++.h>
#include <array>
using namespace std;

int main()
{
    int a[4] = {1, 2, 3, 4};

    array<int, 4> arr = {1, 2, 3, 4};
    cout << "Size : " << arr.size() << endl;
    cout << "Element at 0 : " << arr[0] << endl;
    cout << "Element at 0 : " << arr.at(0) << endl;
    cout << "Is array empty or not : " << arr.empty() << endl;
    cout << "First element of array : " << arr.front() << endl;
    cout << "Last element of array : " << arr.back() << endl;
    return 0;
}