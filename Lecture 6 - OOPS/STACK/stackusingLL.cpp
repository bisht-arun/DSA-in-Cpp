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
        return size;
    }

    bool isempty()
    {
        return head == NULL;
    }

    int top()
    {
        return head->data;
    }

    void push(int element)
    {
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "List is Empty " << endl;
        }
        else
        {
            return head->data;
            delete head;
            head = head->next;
        }
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