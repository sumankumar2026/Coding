#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *prev;
    Node *next;

    // constructor
    Node(int data)
    {
        this->data = data;
        this->prev = NULL;
        this->next = NULL;
    }

    ~Node()
    {
        int val = this->data;
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "memory is free for myth data." << data << endl;
    }
};

// traversing
void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int getLength(Node *head)
{
    int len = 0;
    Node *temp = head;
    while (temp != NULL)
    {
        len++;
        temp = temp->next;
    }
    return len;
}

void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    if (head != NULL)
    {
        temp->next = head;
        head->prev = temp;
    }
    head = temp;
}

void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data); // Step 1: Create a node
    tail->next = temp;           // Step 2
    temp->prev = tail;           // Step 3
    tail = temp;                 // Step 4
}

void insertAtPosition(Node *&tail, Node *&head, int position, int data)
{
    // Insert at start
    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    Node *temp = head;
    int count = 1;

    while (count < position - 1)
    {
        temp = temp->next;
        count++;
    }

    // Insert at end
    if (temp->next == NULL)
    {
        insertAtTail(tail, data);
        return;
    }

    // Insert in the middle
    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next->prev = nodeToInsert;
    temp->next = nodeToInsert;
    nodeToInsert->prev = temp;
}

void deleteAtPostion(Node* &head, int position)
{
    if (position == 1)
    {
        Node *temp = head;
        temp->next->prev = NULL;
        head = temp->next;
        temp->next = NULL;
        delete temp;
        return;
    }

    else
    {
        Node *curr = head;
        Node *prev = NULL;

        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        curr->prev = NULL;
        prev->next = curr->next;
        curr->next = NULL;
        delete curr;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;

    print(head);

    insertAtHead(head, 15);
    print(head);

    insertAtHead(head, 11);
    print(head);

    insertAtTail(tail, 16);
    print(head);

    insertAtPosition(tail, head, 1, 25);
    print(head);

    deleteAtPostion(head, 1);
    print(head);

    cout << "head: " << head->data << endl;
    cout << "tail: " << tail->data << endl;

    cout << "Total number of elements: " << getLength(head) << endl;
    return 0;
}
