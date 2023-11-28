#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << endl;
        temp = temp->next;
    }
}
int main()
{
    /*
        //Statically making of Linked List
        Node n1(1);
        Node n2(2);
        Node n3(3);
        Node n4(4);
        Node n5(5);

        n1.next = &n2;
        n2.next = &n3;
        n3.next = &n4;
        n4.next = &n5;

        cout << n1.data << endl;
        cout << n2.data << endl;
        cout << n3.data << endl;
        cout << n4.data << endl;
        cout << n5.data << endl;
    */

    // Dynamically making of Linked List
    Node *n1 = new Node(10);
    Node *head = n1;
    Node *n2 = new Node(20);
    Node *n3 = new Node(30);
    Node *n4 = new Node(40);
    Node *n5 = new Node(50);

    n1->next = n2;
    n2->next = n3;
    n3->next = n4;
    n4->next = n5;

    print(head);
}