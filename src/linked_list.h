#pragma once

template <typename E>
class SLinkedList;

template <typename E>
class SNode {                                 // singly linked list node
private:
    E elem;                                   // linked list element value
    SNode<E>* next;                           // next item in the list
    friend class SLinkedList<E>;              // provide SLinkedList access
};

template <typename E>
class SLinkedList {                           // a singly linked list
public:
    SLinkedList() : head(nullptr) { }         // empty list constructor
    ~SLinkedList()                            // destructor
    { while (!empty()) removeFront(); }
    bool empty() const                        // is list empty?
    { return head == nullptr; }
    const E& front() const                    // return front element
    { return head->elem; }
    void addFront(const E& e) {               // add to front of list
        SNode<E>* v = new SNode<E>;           // create new node
        v->elem = e;                          // store data
        v->next = head;                       // head now follows v
        head = v;                             // v is now the head
    }
    void removeFront() {                      // remove front item list
        SNode<E>* old = head;                 // save current head
        head = old->next;                     // skip over old head
        delete old;                           // delete the old head
    }
    const E& getMiddle() const {
        return {};
    }    
private:
    SNode<E>* head;                           // head of the list
};
