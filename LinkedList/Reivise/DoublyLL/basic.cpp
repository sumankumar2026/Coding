#include <iostream>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(int d)
    {
        this->data = d;
        this->next = NULL;
        this->prev = NULL;
    }

    ~Node()
    {
        int value = this->data;
        if (this->next != NULL)
        {
            delete next;
            this->next = NULL;
        }
        cout << "Memory is free with data is this: " << value << endl;
    }

};

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

int getLenth(Node *head)
{
    Node *temp = head;
    int cnt = 0;
    while (temp != NULL)
    {
        cnt++;
        temp = temp->next;
    }

    return cnt;
}

void insertAtHead(Node *&head, int d)
{
    // step 1= create a node
    Node *temp = new Node(d);

    // step 2= link like
    temp->next = head;

    // step3 = change head
    head->prev = temp->next;

    // step 4 = assign new head
    head = temp;
}

void insertAtTail(Node *&head, Node *&tail, int d)
{
    Node *temp = new Node(d);
    tail->next = temp;
    temp->prev = tail;
    tail = temp;
}

void insertAtPosition(Node *&head, Node *&tail, int position, int d)
{
    if(position == 1){
        insertAtHead(head,d);
        return;
    }
    Node *temp = head;
    int cnt = 1;
    while (cnt < position - 1)
    {
        temp = temp->next;
        cnt++;
    }  // at last position
    if (temp->next == NULL)
    {
        insertAtTail(head, tail, d);
        return;
    }

    Node* nodeToInsert = new Node(d);
    nodeToInsert -> next = temp -> next;
    temp -> next ->prev = nodeToInsert;
    temp -> next = nodeToInsert;
    nodeToInsert -> prev = temp;
}

void deleteNode(Node *&head, Node *&tail, int position)
{
    // first Position
    if (position == 1)
    {
        Node *temp = head;
        temp -> next -> prev = NULL;
        head = head->next;
        // memory free for firt position
        temp->next = NULL;
        delete temp;
        return;
    }
    else{
        Node *prev = NULL;
    Node *curr = head;
    int cnt = 1;
    while (cnt < position)
    {
        prev = curr;
        curr = curr->next;
        cnt++;
    }
    curr -> prev = NULL;
    prev -> next = curr -> next;
    curr -> next = NULL;
    delete curr;
    tail = prev;
    }
}

int main()
{
    Node *node1 = new Node(10);
    Node *head = node1;
    Node *tail = node1;
    print(head);
    insertAtHead(head, 56);
    print(head);
    insertAtHead(head, 456);
    print(head);

    insertAtTail(head, tail, 05);
    print(head);

    insertAtPosition(head,tail,2,62);
    print(head);

    insertAtPosition(head,tail,1,162);
    print(head);

    insertAtPosition(head,tail,7,262);
    print(head);
    
    deleteNode(head,tail,7);
    print(head);

    cout << getLenth(head) << endl;

    cout << "Head: " << head -> data << endl;
    cout << "tail: " << tail -> data << endl;
    

    return 0;
}