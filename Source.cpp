#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    int n = 10;
    vector<int> a(n);
    int i;

    for (i = 1; i <= n; i++)
        a[i] = i * i;


    for (i = 0; i < n; i++)
        cout << a[i] << " ";

    vector <vector <int>> v;

    for (int i = 0; i < 10; i++)
        for (int j = 0; j < 10; j++) {
            v[i][j] = i * j;
            cout << v[i][j] << "\n";
        }
    cout << "\t\t";

    



	return 0;
}