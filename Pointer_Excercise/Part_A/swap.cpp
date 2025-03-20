//
// Created by Admin on 3/20/2025.
//
#include <iostream>
using namespace std;

void swap_pointers(char** x, char** y) {
    char *tmp;
    tmp = *x; // Sử dụng dereference để lấy giá trị
    *x = *y;
    *y = tmp;
}

int main() {
    char a[] = "I should print second";
    char b[] = "I should print first";

    char *s1 = a;
    char *s2 = b;

    swap_pointers(&s1, &s2); // Truyền địa chỉ của con trỏ

    cout << "s1 is " << s1 << endl;
    cout << "s2 is " << s2 << endl;

    return 0;
}
