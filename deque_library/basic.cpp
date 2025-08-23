#include<iostream>
#include<deque>
using namespace std;

int main(){
    // Deque is Double Ended Queue
    // Dequeue is Poping the elements 
    // Deque is implemented using dynamic arrays
    // All Function of list can be implemented here because of Doubly Ended Queue
    
    deque<int> d = {1,2,3};

    d.push_front(4);

    for(int i : d){
        cout << i << " ";
    }
    cout << endl;

    cout << "Value at Second Index is :" << d[1] << endl;
}