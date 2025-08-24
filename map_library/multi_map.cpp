#include<iostream>
#include<map>

using namespace std;

int main(){
    // Multi keys can be intialized
    multimap<string, int> m;
    // Same as Map

    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);
    m.emplace("tv",100);

    m.erase(m.find("tv"));

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }
    return 0;
}