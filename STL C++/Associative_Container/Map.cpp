#include <iostream>
#include <map>
using namespace std;
int main()
{
    map<int, string> m;
    m.insert({20, "Doe"});
    m.insert({1, "john"});
    m[3] = "Alice";
    // cout << m.at(1) << endl;
    m.erase(20);
    for (auto it : m)
    {
        cout << "Name: " << it.second << " , Key: " << it.first << endl;
    }
    if (m.find(3) != m.end())
    {
        cout << "Found: " << m[3] << endl;
    }
    else
    {
        cout << "Not FOUND!!!" << endl;
    }
    map<int, string>::iterator it;
    for (it = m.begin(); it != m.end(); it++)
    {
        // cout << (*it).first << " ";
        cout << it->first << " ";
    }
    cout << endl;
    std::cout << "Size: " << m.size() << std::endl;
    std::cout << "Is empty: " << (m.empty() ? "Yes" : "No") << std::endl;
    std::map<std::string, int> ageMap;

    // Inserting key-value pairs
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap.insert({"Charlie", 28});
    for (auto it : ageMap)
    {
        cout << it.first << " " << it.second << " ";
    }
    return 0;
}