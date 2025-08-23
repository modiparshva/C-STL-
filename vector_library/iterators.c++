#include<iostream>
#include<vector>
using namespace std;

int main(){

    // Forward using begin
    vector<int> :: iterator it;
    vector<int> vec = {1,2,3,4,5};
    for (it = vec.begin(); it != vec.end();it++){
        cout << *(it) <<" ";
    }
    cout << "\n******\n";
    // Backward using rbegin
    vector<int> :: iterator rit;
    for(auto rit = vec.rbegin(); rit != vec.rend();rit++){
        cout << *(rit) << " ";
    }
}