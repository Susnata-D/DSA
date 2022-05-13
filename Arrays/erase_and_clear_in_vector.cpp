#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> myvector;
    myvector.push_back(1);
    myvector.push_back(2);
    myvector.push_back(3);
    myvector.push_back(4);
    myvector.push_back(5);

    // Vector becomes 1, 2, 3, 4, 5

    //myvector.clear();
    // vector becomes empty

    // Printing the vector
    for (auto it = myvector.begin() ; it < myvector.end() ; ++it)
        cout << ' ' << *it;
    cout<<endl;
    //erasing element of a vector in a range

    vector<int> :: iterator it1 , it2;

    it1 = myvector.begin(); // it is the iterator pointed on beginning of the Array
    it2 = myvector.end();
    it2--;
    it2--; //it2 iterator now pointing on 2nd index(3)
    myvector.erase(it1 , it2);

    //array after erasing
    for (auto it = myvector.begin() ; it < myvector.end() ; ++it)
        cout << ' ' << *it;
    cout<<endl;
    //array after clearing

    myvector.clear(); // erase all elements in the vector and return an empty vector
    return 0;
}
