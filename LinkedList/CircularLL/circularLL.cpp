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

    // Destructor
    ~Node()
    {
        if (next != NULL)
        {
            delete next;
            next = NULL;
        }
        cout << "Node with data " << data << " deleted." << endl;
    }
};

// Assuming an empty node (tail is null) is being passed
void insertNode(Node *&tail, int element, int data)
{
    if (tail == NULL)
    {
        Node *newNode = new Node(data);
        tail = newNode;
        newNode->next = newNode; // Circular link for the single node
    }
    // non empty
    else
    {
        Node *curr = tail;

        while (curr->data != element)
        {
            curr = curr->next;
        }
        // element found curr is representing wala node
        Node *temp = new Node(data);
        temp->next = curr->next;
        curr->next = temp;
    }
}

void print(Node *tail)
{
    Node *temp = tail;

    if(tail == NULL){
        cout << "List is empty" << endl;
        return;
    }

    do
    {
        cout << tail->data << " ";
        tail = tail->next;
    } while (tail != temp);
    cout << endl;
}

void deleteNode(Node *&tail, int value)
{
    // empty list
    if (tail == NULL)
    {
        cout << "Node with data " << value << " not found." << endl;
        return;
    }

    // non empty list

    Node *prev = tail;
    Node *curr = prev->next;

    while (curr->data != value)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;

    // 1 node in linkedlist
    if (curr == prev){
        tail = NULL;
    }

    //>2 node
    if (tail == curr)
    {
        tail = prev;
    }
    curr->next = NULL;
    delete curr;
}

int main()
{
    Node *tail = NULL;
    insertNode(tail, 1, 2);
    print(tail);

/*  insertNode(tail, 2, 3);
    print(tail);

    insertNode(tail, 3, 4);
    print(tail);

    insertNode(tail, 4, 5);
    print(tail);

    insertNode(tail, 3, 9);
    print(tail);

    insertNode(tail, 5, 10);
    print(tail);

    insertNode(tail, 2, 8);
    print(tail);

    deleteNode(tail, 8);
    print(tail);

    deleteNode(tail, 10);
    print(tail);
*/
    deleteNode(tail, 2);
    print(tail);
}