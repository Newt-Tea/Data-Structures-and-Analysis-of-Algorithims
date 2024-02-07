#include "linkedlist.h"


LinkedList::~LinkedList() //Destructor
{
    Node *tmp = head;

    while (tmp!=nullptr)
    {
        head=head->next;

        delete tmp;

        tmp = head;
    }

    tail = nullptr;
}

void LinkedList::append(int data)// Adds data to front of list making it the new head
{
    Node *tmp = new Node(data);

    tmp->prev = tail;

    if(head == nullptr)
    {
        head = tmp;
    }
    else
    {
        tail->next = tmp;
    }

    tail = tmp;
}
void LinkedList::prepend(int data) //Adds Data after the tail Node and makes it the new tail
{
    Node *tmp = new Node(data);

    tmp->next = head;

    if (head == nullptr)
    {
        tail = tmp;
    }
    else
    {
        head->prev = tmp;
    }

    head = tmp;
}


void LinkedList::display(std::ostream &os) // Displays all Node data to console on a per line basis
{
        Node *tmp = head;

        while (tmp != nullptr)
        {
            os << tmp->data << std::endl;

            tmp = tmp->next;
        }
}

bool LinkedList::remove(int data) //Removes first instance of the data point starting at head
{
    Node *tmp = head;

    while(tmp != nullptr)
    {
        if (tmp->data == data)
        {
            if(tmp->prev != nullptr)
            {
                tmp->prev->next = tmp->next;
            }
            if(tmp->next != nullptr)
            {
                tmp->next->prev = tmp->prev;
            }
            if(tmp == head)
            {
                head = tmp->next;
            }
            if(tmp==tail)
            {
                tail = tmp->prev;
            }

            delete tmp;

            return true;
        }
        tmp = tmp->next;
    }
    return false;
}

std::ostream &operator<<(std::ostream &os, LinkedList &right)
{
    right.display(os);

    return os;
}


