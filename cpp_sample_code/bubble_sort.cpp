#include <bits/stdc++.h>
using namespace std;



int main()
{

    int n = 10;
    int *arr = new int(n);

    for(int i=0;i<n;i++)
    {
        arr[i] = rand();
    }

    int i, j;
    bool swapped;
    for (i = 0; i < n - 1; i++) {
        swapped = false;
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }
        // If no two elements were swapped
        // by inner loop, then break
        if (swapped == false)
            break;
    }
    return 0;
}
