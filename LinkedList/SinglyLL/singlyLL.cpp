#include <iostream>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    // Constructor
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "memory is free for data " << value << endl;
    }
};

// Function for insertAtHead
void insertAtHead(Node *&head, int data)
{
    Node *temp = new Node(data);
    temp->next = head;
    head = temp;
}

// function for insertAtTail
void insertAtTail(Node *&tail, int data)
{
    Node *temp = new Node(data);
    tail->next = temp;
    tail = temp;
}

// function for insertAt any position

void insertAtPostion(Node *&tail, Node *&head, int position, int data)
{
    Node *temp = head;
    int cnt = 1;

    if (position == 1)
    {
        insertAtHead(head, data);
        return;
    }

    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }

    if (temp->next == NULL)
    {
        insertAtTail(tail, data); // so a last element is now update.
        return;
    }

    Node *nodeToInsert = new Node(data);
    nodeToInsert->next = temp->next;
    temp->next = nodeToInsert;
}

// deleting the node
void deleteAtPosition(Node *&head, int position)
{ // deleting the first node
    if (position == 1)
    {
        Node *temp = head;
        head = head->next;
        temp->next = NULL;
        delete temp;
    }

    else
    { // deleting the middle node
        Node *curr = head;
        Node *prev = NULL;
        int cnt = 1;
        while (cnt < position)
        {
            prev = curr;
            curr = curr->next;
            cnt++;
        }
        prev->next = curr->next; // for deleting the last node
        curr->next = NULL;
        delete curr;
    }
}

// Function for traversing in linked list
void print(Node *&head)
{
    Node *temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main()
{
    // Creating node
    Node *node1 = new Node(10);

    Node *head = node1;
    Node *tail = node1;
    print(head);

    insertAtHead(head, 92);
    print(head);

    insertAtHead(head, 21);
    print(head);

    insertAtPostion(tail, head, 4, 31);
    print(head);

    deleteAtPosition(head, 4);
    print(head);

    // for verify tail and head

    cout << "Head: " << head->data << endl;
    cout << "Tail: " << tail->data << endl;

    // insertAtTail(tail,15);
    // print(head);

    // insertAtHead(head, 15);
    // print(head);

    return 0;
}
// what we have done a.insertAtHead b.insertAtTail c.insertAtAny position with updation