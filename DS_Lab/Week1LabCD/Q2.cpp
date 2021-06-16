#include <bits/stdc++.h>
using namespace std;
typedef long long ll;
#define rep(i, m) for (ll i = 0; i < (m); i++)
class date
{
    int d, m, y;

public:
    date() { d = 0, m = 0, y = 0; }
    void setDate()
    {
        cout << "date: ";
        cin >> d;
        cout << " month :";
        cin >> m;
        cout << " year:";

        cin >> y;
    }
    void getDate() { cout << d << "-" << m << "-" << y << endl; }
};
class product
{
    int id;
    int pr;
    string name;
    date mfd, exp;
    bool cons;

public:
    void getProdt()
    {
        cout<<" Input values (Product ID, Name, Price, Manufacture date and Expiry date if consumable)"<<endl;
        cin>>id;
        cin >> name;
        cin >> pr;
        mfd.setDate();
        cin >> cons;
    if (cons)
    exp.setDate();
    }
    int getPr() { return pr; }
    int IsCons() { return cons; }
};
class customer
{
    bool mem;

protected:
    string name;
    string address;
    string memId;
    int mob;

public:
    product *list[5];
    int cnt = 0;
    void purchase(product *A)
    {
        list[cnt] = new product;
        list[cnt++] = A;
    }
    customer()
    {

        name = "empty", address = "empty", memId = "empty";
        mob = 0;
        mem = 0;
    }
    void getCust()
    {
cout << "Enter customer: name , address, member(1 or 0),member id if (1), mobile no if 0.\n ";
cin >> name >> address >> mem;
if (mem)
{
    cin >> memId;
}
else
    cin >> mob;
    }
    ll disc()
    {
        ll sm = 0;
        for (int i = 0; i < cnt; i++)
        {
            if (mem)
            {
                sm += list[i]->getPr() * 0.2;
            }
            else
            {
                if (list[i]->IsCons())
                {
                    sm += list[i]->getPr() * 0.02;
                }
                else
                    sm += list[i]->getPr() * 0.04;
            }
        }
        return sm;
    }
};
ll TotDisc(int m, customer *a)
{
    ll sm = 0;
    for (int i = 0; i < m; i++)
    {
        sm += a[i].disc();
    }
    return sm;
}
int mxDisc(int m, customer *a)

{
    ll mx = 0;
    for (int i = 0; i < m; i++)
    {
        mx = max(mx, a[i].disc());
    }
    return mx;
}
int main()
{
    cout << "Enter number of customers (<10): ";
    int n;
    cin >> n;
    customer cs[n];
    rep(i, n)
    {
        cs[i].getCust();
        int k;
        cout << "no of products: ";
        cin >> k;
        cout << endl;
        while (k--)
        {
            product *p = new product;
            p->getProdt();
            cs[i].purchase(p);
        }
    }
    cout << "\nTotal discount given on the day: " << TotDisc(n, cs) << endl;
    cout << "\nMax discount given on the day: " << mxDisc(n, cs) << endl;
    return 0;
}