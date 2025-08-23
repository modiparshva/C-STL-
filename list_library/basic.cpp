#include<iostream>
#include<list>

using namespace std;

int main(){
    // List is internally implemented as Doubly Linked List
    // List contains following functions push_back,push_front,emplace_back,emplace_front,pop_back,pop_front including all other vector functions

    // There is very low difference in it, Vector is implemented as Dynamic Array whereas list is implemented as Doubly Linked List.

    list<int> l;
    l.emplace_back(1);
    l.push_back(2);
    l.push_front(3);
    l.push_front(5);

    l.pop_back();
    l.pop_front();

    // It is not possible to access list randomly because it is based on Linked List
    // cout << l[2] << endl;
    for(int i : l){
        cout << i << " ";
    }
}