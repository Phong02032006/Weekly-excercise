#include <iostream>
using namespace std;

int main( )
{
    char a[4] = "abc";
    for (char *cp = a; (*cp) != '\0'; cp++) {
        cout << (void*) cp << " : " << (*cp) << endl;
    }
    int b;
    int *ip = &b;
    cout <<  (ip + 1 - ip) << " byte" << endl;
    double d;
    double *dp = &d;
    cout <<  (dp + 1 - dp) << " byte" << endl;
}
