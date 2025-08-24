#include<iostream>
#include<queue>
using namespace std;

int main(){
    queue<int> q;
    q.push(10);
    q.push(11);
    q.push(12);
    // All other functions are same as stack

    cout << "\nElements :" << endl;
    while(!q.empty()){
        cout << q.front() << " ";
        q.pop();
    }
}