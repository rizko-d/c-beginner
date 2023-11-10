#include <iostream>
using namespace std;

#define concat(a, b) a ## b

// when Concat appears in the code, it will be replaced by the two tokens   
// concatenated and used to replace the macro.

int main() {
    int xy = 100;
    string str1 = "hello world";

    cout << concat(x, y) << endl;
    cout << concat(str, 1) << endl;
    return 0;
}