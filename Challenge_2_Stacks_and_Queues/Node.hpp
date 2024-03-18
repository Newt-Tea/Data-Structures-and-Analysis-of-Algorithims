#ifndef NODE_H
#define NODE_H

#pragma once

struct Node{
    int data;
    Node *next;

    //Constructors
    Node(): data(0), next(nullptr) {}
    Node(int data): data(data), next(nullptr){}
    Node(int data, Node *next): data(data), next(next){}
};
#endif