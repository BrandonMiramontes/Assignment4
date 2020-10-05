#include <iostream>
using namespace std;

int findLargest3(int a, int b, int c)
{
    int largest;

    // Put your code here

    if (a > b && a > c)
    {
        largest = a;
    }

    if (b > a && b > c)
    {
        largest = b;
    }

    if (c > a && c > b)
    {
        largest = c;
    }

    return largest;
}

int main()
{
    int a, b, c;

    cout << "Please input three integers" << endl;

    cin >> a;
    cin >> b;
    cin >> c;

    cout << "The largest number is " << findLargest3(a, b, c) << endl;

    return 1;
}