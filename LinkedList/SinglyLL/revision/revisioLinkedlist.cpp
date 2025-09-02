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
        this->next = NULL;
    }
};

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

void print(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " -> ";
        temp = temp->next;
    }
    cout << endl;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

int main()
{
    Node *node1 = new Node(10);
    // cout << node1->data << endl;
    // cout << node1->next << endl;
    Node *head = node1;
    Node *tail = node1;

    print(head);
    // insertAtHead(head, 15);
    insertAtTail(tail, 15);
    print(head);

    // insertAtHead(head, 26);
    insertAtTail(tail, 26);
    print(head);

    insertAtPosition(tail,head, 1, 22);
    print(head);

    insertAtPosition(tail,head, 5, 22);
    print(head);

    insertAtPosition(tail,head, 6, 29);
    print(head);

    insertAtPosition(tail,head, 7, 05);
    print(head);

    cout <<"Tail is:- "<< tail->data << " " << endl;
    cout <<"head is:- " <<head->data << " " << endl;

    return 0;
}
