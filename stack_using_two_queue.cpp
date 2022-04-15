// CODE BY :- AJAY PAL IIT (BHU) VARANASI
#include <bits/stdc++.h>
#define ll long long int
#define ld long double
#define kk '\n'
using namespace std;

class QueueStack
{
private:
    queue<int> q1;
    queue<int> q2;

public:
    void push(int);
    int pop();
};

void QueueStack ::push(int x)
{
    // step-1 push into q2
    // step-2 push remaining elements of q1 into q2
    // step-3 swap q1 and q2
    q2.push(x);

    while (q1.size() != 0)
    {
        q2.push(q1.front());
        q1.pop();
    }
    swap(q1, q2);
}

int QueueStack ::pop()
{
    int ans;
    if (q1.empty())
    {
        return -1;
    }

    ans = q1.front();
    q1.pop();

    return ans;
}