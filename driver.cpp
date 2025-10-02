#include "LinkedList.hpp"
#include <iostream>
#include <string>
using namespace std;

int main() {
    // Scenario 1: Append, getElement, replace
    cout << "=== Scenario 1: Append, getElement, replace ===" << endl;
    LinkedList<string> list1;

    // Append elements
    list1.append("Hello");
    list1.append("World");
    list1.append("C++");
    cout << "List after appending: " << list1;

    // Get element
    try {
        cout << "Element at position 1: " << list1.getElement(1) << endl;
    }
    catch (const string& e) {
        cout << e << endl;
    }

    // Replace element
    try {
        list1.replace(1, "Universe");
        cout << "List after replacing position 1 with 'Universe': " << list1;
    }
    catch (const string& e) {
        cout << e << endl;
    }

    // Scenario 2: Clear, empty check, and exception test
    cout << "\n=== Scenario 2: Clear, empty check, and exception ===" << endl;
    LinkedList<int> list2;

    // Append integers
    list2.append(10);
    list2.append(20);
    list2.append(30);
    cout << "Integer list before clear: " << list2;

    // Clear the list
    list2.clear();
    cout << "Integer list after clear: " << list2;

    // Check empty
    if (list2.isEmpty()) {
        cout << "list2 is empty now." << endl;
    }

    // Exception handling: getElement from empty list
    try {
        cout << "Trying to access element at position 0 in empty list..." << endl;
        cout << list2.getElement(0) << endl;
    }
    catch (const string& e) {
        cout << e << endl;
    }

    return 0;
}
