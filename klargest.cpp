#include <vector>
#include <queue>
int kth_largest(std::vector<int> values, int k)
{
    // initialise priority queue
    std::priority_queue<int> maxPQ;

    // insert values into maxPQ
    for (int i : values)
    {
        maxPQ.push(i);
    }

    for (int i = 0; i < k; i++)
    {
        maxPQ.pop();
    }

    return maxPQ.top();
}