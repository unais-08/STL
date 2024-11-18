#include <iostream>
#include <unordered_map>
using namespace std;
int main()
{
    std::unordered_map<std::string, int> ageMap;

    // Inserting key-value pairs
    ageMap["Alice"] = 25;
    ageMap["Bob"] = 30;
    ageMap.insert({"Charlie", 28});

    // Display elements
    std::cout << "Unordered Map elements:\n";
    for (const auto &pair : ageMap)
    {
        std::cout << pair.first << ": " << pair.second << std::endl;
    }

    // Accessing a value by key
    std::cout << "Age of Alice: " << ageMap["Alice"] << std::endl;
    if (ageMap.find("Alice") != ageMap.end())
    {
        cout << "Found: " << ageMap["Alice"] << endl;
    }
    else
    {
        cout << "Not FOUND!!!" << endl;
    }
    return 0;
}
