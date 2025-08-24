#include<iostream>
#include<set>
using namespace std;

int main(){
    set<int> s;
    // Set have functions such as insert,emplace,count,erase,find,size,empty
    s.insert(1);
    s.insert(2);
    s.insert(3);
    s.insert(4);
    s.insert(5);
    s.insert(6);

    cout << "Lowerbound : " << *(s.lower_bound(4)) << endl;
    cout << "Upperbound : " << *(s.upper_bound(5)) << endl;

    cout << s.size() << endl;

    for(auto i : s){
        cout << i << " ";
    }
    cout << endl;

    return 0;
}