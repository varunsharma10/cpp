#include <iostream>
using namespace std;
class DLinkList
{
public:
    DLinkList() : next(NULL), prev(NULL){};
    DLinkList(int val) : value(val), next(NULL), prev(NULL){};
    DLinkList(int val, DLinkList *prv) : value(val), prev(prv), next(NULL){};
    int value;
    DLinkList *next, *prev;
};

main()
{
    cout << "Enter size of linklist ";
    int n;
    cin >> n;
    DLinkList *my_list = NULL;
    DLinkList *last = NULL;
    cout << "Values Inserted ";
    for (int i = 0; i < n; i++)
    {
        int val = rand() % 100;
        if (!i)
        {
            my_list = new DLinkList(val);
            last = my_list;
        }
        else
        {
            last->next = new DLinkList(val, last);
            last = last->next;
        }
        cout << val << endl;
    }
    DLinkList *mid = my_list;
    cout << endl
         << "The patter is below: " << endl;
    for (int i = 0; i < (n / 2); i++)
        mid = mid->next;
    for (int i = 0; i < n / 2 + 1; i++)
    {
        for (int j = 0; j < n / 2 - i; j++)
            cout << " ";
        DLinkList *start = mid;
        for (int j = 0; j < i; j++)
            start = start->prev;
        for (int j = 0; j < (2 * i) + 1; j++)
        {
            cout << start->value << " ";
            start = start->next;
        }
        cout << endl;
    }
}