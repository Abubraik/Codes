#include "unsortedlist.h"
using namespace std;


unsortedlist::unsortedlist() {
    head = new Node;
    head->next = NULL;
};

void unsortedlist::insert(int data) {
    if (head == NULL) {
        head->data = data;
    }
    else {
        Nodeptr temp_ptr = new Node;
        temp_ptr->data = data;
        temp_ptr->next = head;
        head = temp_ptr;
    }
};

Nodeptr unsortedlist::search(int data) {
    Nodeptr temp_ptr = head;
    if (temp_ptr == NULL) {
        return NULL;
    }
    else {
        while (temp_ptr->data != data && temp_ptr->next != NULL)
            temp_ptr = temp_ptr->next;

        if (temp_ptr->data == data)
            return temp_ptr;
        else
            return NULL;

    }
};

void unsortedlist::remove(int data) {
    Nodeptr temp_ptr;
    Nodeptr discard;
    temp_ptr = head;
    if (temp_ptr == NULL) {
        cout << "Empty list";
    }
    else {
        while (temp_ptr->next->data != data && temp_ptr->next != NULL)
            temp_ptr = temp_ptr->next;
        if (temp_ptr->next->data == data)
        {
            discard = temp_ptr->next;
            temp_ptr->next = temp_ptr->next->next;
            delete discard;
        }
    }
};

void unsortedlist::showlist() {
    Nodeptr temp_ptr = head;

    while (temp_ptr->next != NULL) {
        cout << temp_ptr->data << endl;
        temp_ptr = temp_ptr->next;
    }
}
