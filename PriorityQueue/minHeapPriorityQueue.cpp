
#include <iostream>
#include <queue>
using namespace std;


int main() 
{

    int arr[5] = { 90, 5, 3, 100, 200};

    priority_queue<int, vector<int>, greater<int> > pq(arr, arr+5);

    cout<< "Priority queue: ";
    while (!pq.empty())
    {
        cout<< pq.top()<< " ";
        pq.pop();
    }
    cout<< endl;

    cout<< "again: ";
    while (!pq.empty())
    {
        cout<< pq.top()<< " ";
        pq.pop();
    }
    cout<< endl;

    return 0;
}