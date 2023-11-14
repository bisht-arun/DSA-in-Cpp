#include <iostream>
#include <climits>
using namespace std;

template <typename T>
class StackusingArray
{
    T *data;
    int nextindex;
    int capacity;

public:
    StackusingArray()
    {
        capacity = 5; // Given by us
        data = new T[capacity];
        nextindex = 0;
    }

    int size()
    {
        return nextindex;
    }

    bool isempty()
    {
        return nextindex == 0;
    }

    T top()
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
            T *newdata = new T[2 * capacity];  // Making new data that will contain 2X the element
            for (int i = 0; i < capacity; i++) // Copying the old data into new data array
            {
                newdata[i] = data[i];
            }
            capacity = capacity * 2;
            delete[] data;  // Deleting the old data array
            data = newdata; // Pointing newdata to data
        }
        // {
        //     cout << "Stack is full " << endl;
        //     return;
        // }
        else
        {
            data[nextindex] = element;
            nextindex++;
        }
    }

    T pop()
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
    StackusingArray<int> s;

    s.push(10);
    s.push(20);
    s.push(30);
    s.push(40);
    s.push(50);
    s.push(60);
    s.push(70);
    s.push(80);

    cout << s.pop() << endl;
    cout << s.pop() << endl;
    cout << s.pop() << endl;

    cout << s.top() << endl;

    cout << s.isempty() << endl;

    cout << s.size() << endl;
}