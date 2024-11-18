#include <iostream>
#include <queue>
using namespace std;
int main()
{

    std::queue<int> q;
    q.push(70);
    q.push(13);
    q.push(5);
    q.push(120);
    q.pop();
    
    cout << "Size of queue: " << q.size() << endl;
    while (!q.empty())
    {
        cout << q.front() << "-";
        q.pop();
    }
    return 0;
}