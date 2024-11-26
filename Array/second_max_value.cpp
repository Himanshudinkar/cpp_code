#include <iostream>
using namespace std;

int main() {
    int arr[] = {19, 8, 4, 5, 6,14};
    int first = INT8_MIN, second = INT8_MIN;
    int len = sizeof(arr) / sizeof(arr[0]);

    for (int i = 0; i < len; i++)
     {
        if (arr[i] > first)
        {
            second = first;
            first = arr[i];
        } 
        else if (arr[i] > second && arr[i] != first) 
        {
            second = arr[i];
        }
    }
      cout << "second heighest value = " << second << "\n";
    return 0;
}
