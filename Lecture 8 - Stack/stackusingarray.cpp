#include <iostream>
#include <climits>
using namespace std;

class StackusingArray
{
    int *data;
    int nextindex;
    int capacity;

public:
    StackusingArray(int totalsize)
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

    int top()
    {
        if (isempty())
        {
            cout << "Stack is empty " << endl;
            return INT_MIN;
        }
        else
        {
            return data[nextindex - 1];
        }
    }

    void push(int element)
    {
        if (nextindex == capacity)
        {
            cout << "Stack is full " << endl;
            return;
        }
        else
        {
            data[nextindex] = element;
            nextindex++;
        }
    }

    int pop()
    {
        if (isempty())
        {
            cout << "Stack is empty " << endl;
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
    StackusingArray s(5);
    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.top() << endl;

    cout << s.isempty() << endl;

    cout << s.size() << endl;
}