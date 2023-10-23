
#include <iostream>
#include <queue>
using namespace std;


int main() 
{
    priority_queue<int> pq;
    int n;
    cin>> n;

    int arr[n];
    for(int i=0; i<n; i++) {
        cin>> arr[i];
    }

    cout<< "Input array: ";
    for(auto &i : arr) {
        cout<< i<< " ";
    }
    cout<< endl;

    for(int i=0; i<n; i++) {
        pq.push(arr[i]);
    }

    cout<< "Priority queue: ";
    while(!pq.empty()) {
        cout<< pq.top()<< " ";
        pq.pop();
    }
    cout<< endl;

    return 0;
}