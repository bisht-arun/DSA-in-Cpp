#include <iostream>
#include <climits>
using namespace std;

class QueueusingArray
{
    int *data;
    int nextindex;
    int capacity;

public:
    QueueusingArray(int totalsize)
    {
        data = new int[totalsize];
        nextindex = 0;
        capacity = totalsize;
    }

    int size()
    {
        return nextindex;
    }

    bool isempty()
    {
        return nextindex == 0;
    }

    int front()
    {
        if (isempty())
        {
            cout << " Queue is empty " << endl;
            return INT_MIN;
        }
        else
        {
            return data[0];
        }
    }

    void enqueue(int element)
    {
        if (nextindex == capacity)
        {
            cout << " Queue is full " << endl;
        }
        else
        {
            data[nextindex] = element;
            nextindex++;
        }
    }

    int dequeue()
    {
        if (isempty())
        {
            cout << " Queue is empty " << endl;
            return INT_MIN;
        }
        else
        {
            nextindex--;
            return data[nextindex];
        }
    }
};

int main()
{
    QueueusingArray q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    q.enqueue(60);

    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;
    cout << q.dequeue() << endl;

    cout << q.front() << endl;

    cout << q.isempty() << endl;

    cout << q.size() << endl;
}