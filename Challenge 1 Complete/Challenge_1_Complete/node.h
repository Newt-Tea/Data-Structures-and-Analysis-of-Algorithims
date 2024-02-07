#ifndef NODE_H
#define NODE_H


class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node(): data(0), next(nullptr), prev(nullptr) {}
    Node(int data): data(data), next(nullptr),prev(nullptr){}
    Node(int data, Node *next, Node *prev): data(data), next(next), prev(prev){}

};

#endif // NODE_H
