#include <iostream>
using namespace std;
int main()
{
    int n;
    cout << "Enter number of inputs ";
    cin >> n;
    int *arr = new int[n];
    for (int i = 0; i < n; i++)
        arr[i] = rand() % 100;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 == 0)
            cout << arr[i] << " ";
    }
    cout << endl;
    for (int i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0)
            cout << arr[i] << " ";
    }
    return 0;
}