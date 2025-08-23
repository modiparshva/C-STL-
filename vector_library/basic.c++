#include<iostream>
#include<vector>
using namespace std;

// int main(){
//     vector<int> vec;
//     vec.push_back(1);
//     vec.push_back(2);
//     vec.push_back(3);

//     // Same as push back
//     vec.emplace_back(4);

//     // vec.pop_back();

//     // cout << vec.size() << endl;
//     // cout << vec.capacity() << endl;

//     // at function
//     // cout << "Value at index 2 is :" << vec.at(2) << endl;

//     // front and back function
//     // cout << "Front :" << vec.front() << endl;
//     // cout << "End :" << vec.back() << endl;


//     // Erase and Insert
//     auto it = vec.erase(vec.begin());
//     cout << "Erasing the value from beginning :" << endl;
//     for(int i : vec){
//         cout << i << endl;
//     }


//     // vector<int> vec2(vec);

//     // For each loop
//     // for (int i : vec2){
//     //     cout << i << endl;
//     // }

//     // In vector, size is actual number of elements stored in a vector,where as capacity is the total capacity to hold the elements.
//     // vector<int> vec = {1,2};
    
//     // vector<int> vec1(3,10);
//     // vector<int> vec2(vec1);
//     return 0;
// }

// int main(){
//     vector<int> vec = {1,2,3,4,5};

// // Erase and Insert Function are constly function, also on using Erase and Clear function it does remove elements but do not remove capacity.

// // Erase Function
//     // vec.erase(vec.begin());
//     // vec.erase(vec.begin(),vec.begin()+2);

// // Insert Function
//     vec.insert(vec.begin()+2,100);
//     for(int i : vec){
//         cout << i << " ";
//     }
//     cout << endl;
// }

int main(){
    vector<int> vec = {1,2,3,4,5};

    cout << "Vec begin :" << *(vec.begin()) << endl;
    cout << "Vec end :" << *(vec.end()-2) << endl;
    // vec.end() would direct be pointed to the next element of ending element
    return 0;
}