#include<iostream>
#include<stack>
using namespace std;

int main(){
    stack<int> s;
    // stack is LIFO Data Structure
    // It has Functionality such as top,push,emplace,pop,empty,swap(stack),size
    s.push(1);
    s.push(2);
    s.push(3);

    // cout << "Top Value in Stack is :" << s.top() << endl;
    // cout << endl;
    // while(!s.empty()){
    //     cout << s.top() << " ";
    //     s.pop();
    // }

    cout << "\nThe size of stack is :" << endl;
    cout << s.size() << endl;

    // Swapping Between Stack
    stack<int> s2;
    s2.swap(s);

    cout << "\nStack s2 after swapping :" << endl;
    while(!s2.empty()){
        cout << s2.top() << " ";
        s2.pop();
    }
    cout << endl;
    return 0;
}