#include <iostream>
using namespace std;

int findLargest2(int a, int b)
{
    int largest;

    if (a > b)
    {
        largest = a;

    }

    if (a < b)
    {
        largest=b;
        
    }

    return largest;
}

int main()
{
    int a, b;

    cout << "Please input two integers" << endl;

    cin >> a;
    cin >> b;

    cout << "The largest number is " << findLargest2(a, b) << endl;

    return 1;
}