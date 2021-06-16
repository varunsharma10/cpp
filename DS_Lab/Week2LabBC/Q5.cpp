#include<bits/stdc++.h>
using namespace std;
template <class T>
class Mylist {
public:
    Mylist(const T &e = T(), Mylist *n = NULL, Mylist *p = NULL) : element(e), next(n), previous(p) {}
    ~Mylist() {}
    T element;
    Mylist *next;
    Mylist *previous;
     
};
template <class T>
class Iterator {
private:
    Mylist<T> *actualNode;
public:
    Iterator(Mylist<T> *node = NULL) : actualNode(node) {}
    ~Iterator() {
        if (actualNode==NULL) {
            actualNode = NULL;
        }
    }
    Mylist<T> *nextNode() {
        if (actualNode==NULL) {
            return NULL;
        }
        actualNode = actualNode->next;
        return actualNode;
    }
    Mylist<T> *previousNode() {
        if (actualNode==NULL) {
            return NULL;
        }
        actualNode = actualNode->previous;
        return actualNode;
    }
};
template <class T>
class List {
private:
    Mylist<T> *head;
    Mylist<T> *tail;
public:
    List() {
        head = new Mylist<T>();
        tail = new Mylist<T>();
    }
    ~List() {
        clear();
        delete head;
        delete tail;
    }
    bool isEmpty() 
    { 
        return (head->next == NULL);
    }
    void push_front(T &e) 
    {
        if (isEmpty()) {
            Mylist<T> *newNode = new Mylist<T>(e);
            head->next = newNode;
            tail->previous = newNode;
        }
        else {
            Mylist<T> *actualFirst = head->next;
            Mylist<T> *newNode = new Mylist<T>(e, actualFirst);
            actualFirst->previous = newNode;
            head->next = newNode;
        }
    }
    void push_back(T &e) 
    {
        if (isEmpty()) {
            Mylist<T> *newNode = new Mylist<T>(e);
            head->next = newNode;
            tail->previous = newNode;
        }
        else {
            Mylist<T> *actualLast = tail->previous;
            Mylist<T> *newNode = new Mylist<T>(e, NULL, actualLast);
            actualLast->next = newNode;
            tail->previous = newNode;
        }
    }
    void clear() 
    {
        int counter = 0;
        while (tail->previous!=NULL) {
            Mylist<T> *remove = tail->previous;
            tail->previous = remove->previous;
            delete remove;
            counter++;
        }
        std::cout << "Released " << counter << " nodes from memory" << std::endl;
    }
    Iterator<T> *front() 
    {
        Iterator<T> *i = new Iterator<T>(head);
        return i;
    }
    Iterator<T> *back() 
    {
        Iterator<T> *i = new Iterator<T>(tail);
        return i;
    }
    
};
int main()
{   list<int> l1;
    l1.push_front(10);
    l1.push_front(20);
    l1.push_back(50);
    l1.front();
    l1.back();
    l1.clear();

}