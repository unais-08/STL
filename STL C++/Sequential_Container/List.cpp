#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;
#define nl std::cout << std::endl // for new line
int main()
{
    list<int> myList;
    myList.push_back(1);
    myList.push_back(2);
    myList.push_back(3);
    myList.push_front(4);
    myList.push_front(5);
    myList.push_front(6);
    myList.pop_back();
    myList.pop_front();
    for (auto it : myList)
    {
        cout << it << " ";
    }
    nl;
    auto it = myList.begin();
    std::advance(it, 2);
    myList.erase(it);

    for (auto it : myList)
    {
        cout << it << " ";
    }
    return 0;
}