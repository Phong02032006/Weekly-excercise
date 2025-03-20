#include <iostream>
#include <cstring>
using namespace std;
int count(const char* str1, const char* str2) {
    int count = 0;
    int len1 = strlen(str1);
    int len2 = strlen(str2);
    for (int i = 0; i <= len2 - len1; i++){
        if (strncmp(str1, str2 + i, len1) == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    char str1[100], str2[100];
    cin >> str1;
    cin >> str2;
    int occurrences = count(str1, str2);
    cout << occurrences << endl;

    return 0;
}
