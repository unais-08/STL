#include <iostream>
#include <string>
#include <deque>

int main()
{
    // Initialize deque
    std::deque<int> myDeque = {1, 2, 3, 4};
    std::deque<std::string> names = {"unais", "kashif", "ubaid", "danish", "rehan"};
    // Insert elements at both ends
    names.push_back("Abuzar");
    names.push_front("Maaz");
    myDeque.push_front(0); // {0, 1, 2, 3, 4}
    myDeque.push_back(5);  // {0, 1, 2, 3, 4, 5}

    // Access elements by index
    std::cout << "Element at index 2: " << myDeque[2] << std::endl;

    // Access front and back elements
    std::cout << "Front: " << myDeque.front() << std::endl;
    std::cout << "Back: " << myDeque.back() << std::endl;

    // Delete elements from both ends
    myDeque.pop_front(); // Removes the first element
    myDeque.pop_back();  // Removes the last element

    // Insert an element in the middle
    auto itr = names.begin() + 3;
    auto it = myDeque.begin() + 2;
    names.insert(itr, "Abubakar");
    itr = names.begin();
    myDeque.insert(it, 10); // {1, 2, 10, 3, 4}

    // Erase an element in the middle

    it = myDeque.begin() + 1;
    myDeque.erase(it); // {1, 10, 3, 4}

    // Display the modified deque
    std::cout << "Deque elements: ";
    for (int element : myDeque)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;
    std::cout << "Deque elements: ";
    for (auto element : names)
    {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    for (itr; itr != names.end(); itr++)
    {
        // std::cout << *itr << " "; // Print the element before erasing
        itr = names.erase(itr); // Move to the next element
    }
    std::cout << std::endl;
    for (auto it : names)
    {
        std::cout << it << " ";
    }
    std::cout << std::endl;
    return 0;
}
