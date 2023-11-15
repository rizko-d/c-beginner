#include <iostream> 
using namespace std;

#define MKSTR(x) #x

int main () {
    cout << MKSTR(HelloCPlusPlus) << endl;
    return 0;
}
