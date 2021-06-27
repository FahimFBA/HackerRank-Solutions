#include <iostream>
#include <string>
using namespace std;

int main()
{
    string a, b;
    cin >> a;
    cin >> b;

    string c = a;

    int sizeA = a.size();
    int sizeB = b.size();
    string newString;
    newString = a + b;

    cout << sizeA << " " << sizeB << endl;
    cout << newString << endl;

    a[0] = b[0];
    b[0] = c[0];

    cout << a << " " << b << endl;

    return 0;
}