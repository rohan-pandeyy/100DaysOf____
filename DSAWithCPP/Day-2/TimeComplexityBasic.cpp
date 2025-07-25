// Rate at which the time taken
// increases with respect to the input size

// (1 + 2 + 3 + ... + n) = n(n+1)/2
// O(n^2) time complexity

// (1 + 2 + 4 + 8 + 16 ... + n) = 2^(n-1)
// O(log n) time complexity

// (2 + 4 + 16 + 256 ... + n) = 2^(2^(n-1))
// O(log(log n)) time complexity

#include <iostream>
using namespace std;

int eg1() // time complexity = O(n)
{

    int i, n = 8;
    for (i = 1; i <= n; i++) { // n
        cout << "Hello World !!!\n"; // 1
    }
    return 0;
}

#include <iostream>
using namespace std;

int eg2() // O(log n)
{

    int i, n = 8;
    for (i = 1; i <= n; i=i*2) {
        cout << "Hello World !!!\n"; // 1
    }
    return 0;
}

// eg2() 👇
// 1
// 2
// 4
// 8
// 16
// (1 + 2 + 4 + 8 + 16 ... n) = O(log n)

#include <iostream>
#include <cmath>
using namespace std;

int eg3()
{

    int i, n = 8;
    for (i = 2; i <= n; i=pow(i,2)) {
        cout << "Hello World !!!\n"; // 1
    }
    return 0;
}

// eg3()
// 2
// 2*2 = 4
// 4*2 = 16
// 16*2 = 256
// (2 + 4 + 16 + 256 ... + n) = O(log(log n))


#include <iostream>
using namespace std;

int eg4() // O(n*m)
{
    int n = 3;
    int m = 3;
    int arr[][3] = { { 3, 2, 7 }, { 2, 6, 8 }, { 5, 1, 9 } };
    int sum = 0;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            sum += arr[i][j];
        }
    }

    cout << sum << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    // eg1();
    // eg2();
    // eg3();
    eg4();
    return 0;
}