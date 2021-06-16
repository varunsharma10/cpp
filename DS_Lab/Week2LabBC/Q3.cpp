#include<bits/stdc++.h>
using namespace std;
template<typename T>
class Myvector
{
private:
    T *arr;
    int length;
    int size;
public:
    Myvector(int x)
    {
        size= x;
        arr = new T[size];
        length =0;
    }
    Myvector()
    {
        arr = new T[1];
        size = 1;
        length = 0;
    }
    void clear()
    {
        delete arr;
        length =0;
        size = 0;
    }
    void erase(int pos)
    {
        if(length < pos)
        {
            return;
        }
        else
        {
           for(int i = pos-1;i<length-1;i++)
           {
                arr[i] = arr[i+1];
           }

            length--; 
            free(arr+ pos);
        }
        
    }
    int push_back(T data)
    {
        if (length == size) {
        T* old = arr;
        arr = new T[size = size * 2];
        copy(old, old + length, arr);
        delete[] old;
        }
        arr[length++] = data;
        return length;
    }
    int max_size()
    {
        return size;
    }
    void assign(T data , int pos)
    {
        if(length < pos)
        {
            return;
        }
        else
        {
            arr[pos-1] = data;
        }
        
    }
    T pop_back()
    {
        return arr[length-- -1];
    }
    int sizee()
    {
        return length;
    }
    void resize(int data)
    {
        size = data;
    }
    void print()
    {
        for (int i = 0; i < length; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};
int main()
{
    Myvector<int>v(3);
    v.push_back(1);
    v.push_back(2);
    v.push_back(3);
    v.print();
    v.pop_back();
    v.print();
    cout<<v.max_size()<<" "<<v.sizee()<<endl;
    v.resize(5);
    cout<<v.max_size()<<endl;
    v.assign(0,1);
    v.print();
    v.push_back(4);
    v.push_back(5);
    v.print();
    v.clear();
    v.print();
}
