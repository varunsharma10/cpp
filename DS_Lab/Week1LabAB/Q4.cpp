#include <iostream>
using namespace std;
class LinkList
{
public:
    LinkList() : next(NULL){};
    LinkList(int val) : value(val), next(NULL){};
    int value;
    LinkList *next;
};
int main()
{
    cout << "Enter size of linklist ";
    int n;
    cin >> n;
    LinkList *my_list = NULL;
    LinkList *last = NULL;
    cout << "Values Inserted ";
    for (int i = 0; i < n; i++)
    {
        int val = rand() % 100;
        if (!i)
        {
            my_list = new LinkList(val);
            last = my_list;
        }
        else
        {
            last->next = new LinkList(val);
            last = last->next;
        }
        cout << val << endl;
    }
    fflush(stdin);
    int N = n;
    for (int i = 0; i < n; i++)
    {
        cout << "Press any key to delete the smallest node ";
        getchar();
        last = my_list;
        LinkList *prevnode = last;
        int smallest = last->value;
        for (int i = 0; i < N - 1; i++)
        {
            if (smallest > last->next->value)
            {
                smallest = last->next->value;
                prevnode = last;
            }
            last = last->next;
        }
        cout << smallest << endl;
        if (prevnode == my_list)
        {
            LinkList *delNode = my_list;
            my_list = my_list->next;
            delete (delNode);

            N--;
            continue;
        }
        LinkList *delNode = prevnode->next;
        prevnode->next = delNode->next;
        delete (delNode);
        N--;
    }
}