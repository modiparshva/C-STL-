#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Normal Pair
    pair<int,string> p = {10,"Parshva Modi"};
    cout << "First Element :" << p.first << endl;
    cout << "Second Element :" << p.second << endl;

    // Nested Pair
    cout << "Nested Pair : " << endl;
    pair<int, pair<int,string>> p1 = {20, {30,"modi"}};
    cout << "First Element :" << p1.first << endl;
    cout << "Second Element :" << (p1.second.first) << endl;

    // Vector Pair
    cout << "\nVector Pair :" << endl;
    vector<pair<int,string>> vec = {{4,"P"}};
    vec.push_back({1,"A"});
    vec.emplace_back(2,"B");

    for(auto i : vec){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}