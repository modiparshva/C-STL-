#include<iostream>
#include<map>

using namespace std;
int main(){
    map<string,int> m;

    // functions : insert,emplace,count,erase,find,size,empty

    m["tv"] = 100;
    m["laptop"] = 100;
    m["headphones"] = 50;
    m["tablet"] = 120;
    m["watch"] = 50;

    m.insert({"camera",25});
    m.erase("tv");

    if (m.find("camera") != m.end()){
        cout << "Found\n";
    } else{
        cout << "Not Found\n";
    }

    for(auto i : m){
        cout << i.first << " " << i.second << endl;
    }

    

    cout << "Count = " << m.count("laptop") << endl;
    return 0;
}