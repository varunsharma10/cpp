#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Mystack
{   
    public:
        int top;
        int size;
        T *arr;
        int length;
        
        Mystack()
        {
            top = -1;
            size =0;
            arr = new T[1];
            length = 0;     
        }
        void push(T data)
        {   
            ++top;
            ++size;
            arr[top] = data;
        }
        T pop()
        {
            T element = arr[top];
            top--;
            size--;

            return element;
        }
        T top_ele()
        {
            T element = arr[top];

            return element;
        }
        T sizee()
        {
            return size;
        }
};
int main()
{
    Mystack<int>s;
    s.push(6);
    s.push(5);
    s.push(15);
    cout<<"Current Size: ";
    cout<<s.sizee();
    cout<<endl;
    cout<<"Popped Element: ";
    cout<<s.pop();
    cout<<endl;
    cout<<"Top Element of Stack: ";
    cout<<s.top_ele();
    cout<<endl;
    cout<<"Size of Stack: ";
    cout<<s.sizee();
    cout<<endl;
}