// LIFO -> last in first out

// functions
// empty(), size(), push(), pop(), top()

#include <iostream>
#include <stack>
using namespace std;

int main() 
{

    stack<int> s;
    
    s.push(10);
    s.push(20);

    for(int i=20; i<100; i=i+10) {
        s.push(i);
    }

    cout<< "Stack size: "<< s.size()<< endl;

    cout<< "Stack elements: "<< endl;
    stack<int> copyStack = s;
    while(!copyStack.empty()) {
        cout<< copyStack.top()<< endl;
        copyStack.pop();
    }

    // deleting elements
    cout<< "Deleting last 5 elements\n";
    for(int i=0; i<5; i++) {
        s.pop();
    }

    cout<< "Stack size: "<< s.size()<< endl;

    cout<< "Stack elements: "<< endl;
    copyStack = s;
    while(!copyStack.empty()) {
        cout<< copyStack.top()<< endl;
        copyStack.pop();
    }

    return 0;
}
