#include <iostream>
using namespace std;

int strlen(const char *a) {
    int length = 0;
    while (a[length] != '\0') {
        length++;
    }
    return length;
}

void strcpy(char *dest, const char *src) {
    while (*src != '\0') {
        *dest = *src;
        dest++;
        src++;
    }
    *dest = '\0';
}

void reverse(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++) {
        char temp = a[i];
        a[i] = a[length - i - 1];
        a[length - i - 1] = temp;
    }
}

void delete_char(char a[], char c) {
    int length = strlen(a);
    int j = 0;
    for (int i = 0; i < length; i++) {
        if (a[i] != c) {
            a[j++] = a[i];
        }
    }
    a[j] = '\0';
}

void pad_right(char a[], int n) {
    int length = strlen(a);
    if (length >= n) return;
    for (int i = length; i < n; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

void pad_left(char a[], int n) {
    int length = strlen(a);
    if (length >= n) return;
    int spaces = n - length;
    for (int i = length - 1; i >= 0; i--) {
        a[i + spaces] = a[i];
    }
    for (int i = 0; i < spaces; i++) {
        a[i] = ' ';
    }
    a[n] = '\0';
}

void truncate(char a[], int n) {
    int length = strlen(a);
    if (length > n) {
        a[n] = '\0';
    }
}

bool is_palindrome(char a[]) {
    int length = strlen(a);
    for (int i = 0; i < length / 2; i++) {
        if (a[i] != a[length - i - 1]) {
            return false;
        }
    }
    return true;
}

void trim_left(char a[]) {
    int length = strlen(a);
    int i = 0;
    while (a[i] == ' ' && i < length) {
        i++;
    }
    strcpy(a, a + i);
}

void trim_right(char a[]) {
    int length = strlen(a);
    while (length > 0 && a[length - 1] == ' ') {
        length--;
    }
    a[length] = '\0';
}

int main() {
    char str[100]="   Hello, world!   ";
    char orgin[100];
    strcpy(orgin, str);
    cout << "Original string: '" << str << "'" << endl;
    reverse(str);
    cout << "Reversed string: '" << str << "'" << endl;
    strcpy(str, orgin);
    delete_char(str, 'o');
    cout << "After deleting 'o': '" << str << "'" << endl;
    strcpy(str, orgin);
    pad_right(str, 20);
    cout << "After padding right to 20: '" << str << "'" << endl;
    strcpy(str, orgin);
    pad_left(str, 25);
    cout << "After padding left to 25: '" << str << "'" << endl;
    strcpy(str, orgin);
    truncate(str, 15);
    cout << "After truncating to 15: '" << str << "'" << endl;
    strcpy(str, orgin);
    cout << "Is palindrome: " << (is_palindrome(str) ? "true" : "false") << endl;
    strcpy(str, orgin);
    trim_left(str);
    cout << "After trimming left: '" << str << "'" << endl;
    strcpy(str, orgin);
    trim_right(str);
    cout << "After trimming right: '" << str << "'" << endl;
    return 0;
}
