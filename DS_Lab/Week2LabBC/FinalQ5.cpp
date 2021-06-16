#include<bits/stdc++.h>
using namespace std;
template <typename T>
struct Node
{
    T data;
    Node *next;
};
template <typename T>
class List
{
private:
    Node<T> *head;

public:
    List()
    {
        head = NULL;
    }
    void push(T val)
    {
        Node<T> *n = new Node<T>();
        n->data = val;
        n->next = head;
        head = n;
    }
    T pop()
    {
        if (head)
        {
            T p = head->data;
            head = head->next;
            return p;
        }
    }
    bool search(T val)
    {
        Node<T> *temp = head;
        while (temp->next)
        {
            if (temp->data == val)
                return true;
            else
                temp = temp->next;
        }
        delete temp;
        return false;
    }
};
int main()
{
    List<int> MyList;
    List<int> temp;
    List<int> temp2;
    int n;
    cout<<"Enter Size: ";
    cin>> n;
    cout<<"\n"<< " Initial List: ";
    for (int i = 0; i < n; ++i)
    {
        MyList.push(rand() % 100);
    }
    temp = MyList;
    for (int i = 0; i < n; ++i)
    {
        cout << temp.pop() << " ";
    }
    //pop
    cout <<"\n"<< " Popping element : " << MyList.pop() << endl << " List after popping : ";
        temp = MyList;
    for (int i = 0; i < n - 1; ++i)
    {
        cout << temp.pop() << " ";
    }
    // push
    cout << endl
         << " Enter element to be pushed: ";
    int push;
    cin >> push;
    MyList.push(push);
    cout << "List after pushing " << push << " : ";
    temp = MyList;
    for (int i = 0; i < n; ++i)
    {
        cout << temp.pop() << " ";
    }
    // search
    int search;
    cout << endl
         << " Enter element to be searched: ";
    cin >> search;
    if (MyList.search(search) == 1)
    {
        cout << "Element " << search << " is present in the list." << endl;
    }
    else
    {
        cout << "Element " << search << " is NOT present in the list." << endl;
    }
}