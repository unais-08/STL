#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
int main()
{
    vector<int> vec1 = {1, 25, 94, 65, 84, 5, 48, 12, 89};
    sort(vec1.begin(), vec1.end());
    for (const auto it : vec1)
    {
        cout << it << " ";
    }
    cout << endl;
    vector<int> myVector;
    myVector.push_back(1);
    myVector.push_back(4);
    myVector.push_back(5);
    myVector.push_back(0);
    myVector.pop_back();
    vector<int>::iterator it;
    for (it = myVector.begin(); it != myVector.end(); it++)
    {
        cout << *(it) << " ";
    }
    cout << endl;

    vector<int> vec2(5, 0);
    for (const auto it : vec2)
    {
        cout << it << " ";
    }
    cout << endl;
    myVector.clear();
    vec1.clear();
    vec2.clear();
    cout << "Size of myVector: " << myVector.size() << endl;
    cout << "Size of vec1: " << vec1.size() << endl;
    cout << "Size of vec2: " << vec2.size() << endl;
    return 0;
}