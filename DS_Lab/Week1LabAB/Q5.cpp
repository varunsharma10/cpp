#include <iostream>
using namespace std;
class CLinkList
{
public:
    CLinkList() : next(NULL){};
    CLinkList(int val) : value(val), next(NULL){};
    int value;
    CLinkList *next;
};
int main()
{
    cout << "Enter size of linklist ";
    int n;
    cin >> n;
    CLinkList *my_list = NULL;
    CLinkList *last = NULL;
    cout << "Values Inserted ";
    for (int i = 0; i < n; i++)
    {
        int val = rand() % 100;
        if (!i)
        {
            my_list = new CLinkList(val);
            last = my_list;
        }
        else
        {
            last->next = new CLinkList(val);
            last = last->next;
        }
        last->next = my_list;
        cout << val << endl;
    }
    fflush(stdin);

    int N = n;
    for (int i = 0; i < n; i++)
    {
        cout << "Press any key to delete the smallest node ";
        getchar();
        last = my_list;
        CLinkList *prevnode = last;
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
            CLinkList *delNode = my_list;
            my_list = my_list->next;
            last->next = my_list;
            delete (delNode);
            N--;
            continue;
        }
        CLinkList *delNode = prevnode->next;
        prevnode->next = delNode->next;
        delete (delNode);
        N--;
    }
}