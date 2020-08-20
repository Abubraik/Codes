#pragma once
#include<iostream>;
struct Node {
    int data;
    Node* next;
};
typedef Node* Nodeptr;
class unsortedlist {
public:
    unsortedlist();
    void insert(int data);
    Nodeptr search(int data);
    void remove(int data);
    void showlist();
private:
    Nodeptr head;

};
