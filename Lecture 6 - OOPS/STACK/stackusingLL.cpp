#include <iostream>
using namespace std;

class Node
{
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

class StackusingLinkedList
{
    Node *head;
    int size = 0;

public:
    StackusingLinkedList()
    {
    }

    int getsize()
    {
    }

    bool isempty()
    {
    }

    int top()
    {
    }

    void push(int element)
    {
    }

    int pop()
    {
    }
};

int main()
{
    StackusingLinkedList() s;
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