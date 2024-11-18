#include <iostream>
#include <set>
#include <algorithm>

int main()
{
    std::set<int> s;
    s.insert(2);
    s.insert(3);
    s.insert(1);
    s.insert(10);
    s.insert(2); // ignore or not inserted
    // std::set<int>::reverse_iterator it;
    // for (it = s.rbegin(); it != s.rend(); ++it)
    // {
    //     std::cout << *it << " ";
    // }
    // std::cout << std::endl;
    for (auto it : s)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    s.erase(3);
    for (auto it : s)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    auto find = s.find(2);
    if (find != s.end())
    {
        std::cout << "Element found " << *find << std::endl;
    }
    else
    {
        std::cout << "Not Found!!!" << std::endl;
    }

    std::cout << "Size of set is: " << s.size() << std::endl;
    std::cout << "Is empty: " << (s.empty() ? "Yes" : "No") << std::endl;
    return 0;
}