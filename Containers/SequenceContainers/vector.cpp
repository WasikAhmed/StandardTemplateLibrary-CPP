// Vectors are dynamic arrays
// can change size during runtime
// contiguous storage location

#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int> v) {
    for(auto i=v.begin(); i!=v.end(); i++) {
        cout<< *i<< " ";
    }
    cout<< endl;
}

int main() {

    vector<int> v;
    for(int i=10; i<=100; i+=10) {
        v.push_back(i); // push element in vector
    }

    // iterators

    // auto b = v.begin();
    // cout<< *b<< endl;
    // auto e = v.end();
    // cout<< *e<< endl;
    // for(auto i=b; i!=e; i++) {
    //     cout<< *i<< endl;
    // }
    cout<< "Vector elements: ";
    printVector(v);

    // capacity

    if(v.empty()) 
        cout<< "Vector is empty"<< endl;
    else 
        cout<< "Vector is not empty"<< endl;

    cout<< "Vector size: "<< v.size()<< endl;
    cout<< "Max size: "<< v.max_size()<< endl;
    cout<< "Capacity: "<< v.capacity()<< endl;

    v.resize(40); // resize vector size to 40
    cout<< "Resized vector(40): ";
    printVector(v);
    cout<< "Vector size: "<< v.size()<< endl;
    cout<< "Capacity: "<< v.capacity()<< endl;

    v.resize(5); // resize vector size to 5
    cout<< "Resized vector(5): ";
    printVector(v);
    cout<< "Vector size: "<< v.size()<< endl;
    cout<< "Capacity: "<< v.capacity()<< endl;

    // reserve()

    // element access

    cout<<"Element at index 3: "<< v.at(3)<< endl;
    cout<< "Front element: "<< v.front()<< endl;
    cout<< "Last element: "<< v.back()<< endl;

    // modifiers

    vector<int> v2;
    v.assign(10, 69); // fill vector with 69 ten times
    cout<< "Vector(2nd) elements: ";
    printVector(v);

    return 0;
}