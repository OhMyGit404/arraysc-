#include <iostream>
#include "arrays.h"

int main() {
    string fruit = "Pineapple";
    string* point = &fruit;
    cout << fruit << endl;
    cout << point << endl;
    cout << &fruit << endl;
    cout << *point << endl;
    return 0;
}
