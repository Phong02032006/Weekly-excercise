//
// Created by Admin on 3/20/2025.
//
#include <iostream>
using namespace std;
char* weird_string() {
    char c[] = "123345";
    return c;
}

int main() {
    char* str = weird_string();
    cout <<  str << endl;
    return 0;
}
//IDE của em cảnh báo "The address of local variable c may escape the function" và ko in ra gì cả
