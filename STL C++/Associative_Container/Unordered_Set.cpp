#include <iostream>
#include <unordered_set>
using namespace std;
int main()
{
    unordered_set<int> us;
    us.insert(10);
    us.insert(30);
    us.insert(20);
    // us.insert(30);duplicate not added
    us.erase(30);
    for (auto it : us)
    {
        cout << it << " ";
    }
    cout << endl;
    auto find = us.find(20);
    if (find != us.end())
    {
        std::cout << "Element found " << *find << std::endl;
    }
    else
    {
        std::cout << "Not Found!!!" << std::endl;
    }
    return 0;
}