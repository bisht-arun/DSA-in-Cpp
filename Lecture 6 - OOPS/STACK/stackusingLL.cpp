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

public:
    StackusingLinkedList()
    {
        head = NULL;
    }

    int size = 0;

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
        {
            Node *new_node = new Node();
            new_node->data = element;
            new_node->next = (*head);
            (*head) = new_node;
        }
    }

    int pop()
    {
        if (head == NULL)
        {
            cout << "List is Empty " << endl;
        }
        else
        {
            int ans;
            ans = head->data;
            return ans;
            delete head;
            head = head->next;
            size--;
        }
    }
};

int main()
{
    StackusingLinkedList s();
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