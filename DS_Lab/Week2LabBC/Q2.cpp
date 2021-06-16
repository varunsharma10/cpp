#include<bits/stdc++.h>
using namespace std;
template<class T>
class sort_method
{
public:
    int n;
    T *arr;
sort_method(int x)
{
    n  = x;
    arr = new T[n];
}
~sort_method()
{
    delete arr;
}
void input()
{   
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
}
void display()
{
    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
}
void quickSort(int low, int high)
{
    if (low < high)
    {
        int pi = partition(arr, low, high);
 
        quickSort(low, pi - 1);
        quickSort(pi + 1, high);
    }
}
int partition (T arr[], int low, int high)
{
    int pivot = arr[high];    
    int i = (low - 1);  
 
    for (int j = low; j <= high- 1; j++)
    {
        
        if (arr[j] <= pivot)
        {
            i++;    
            swap(arr[i], arr[j]);
        }
    }
    swap(arr[i + 1], arr[high]);
    return (i + 1);
}
void BubbleSort(){
    bool ok = true;
    while(ok)
    {
        ok = false;
        for (size_t i=0; i<n-1; i++) 
        {
            if (arr[i] > arr[i + 1]) {
                swap(arr[i],arr[i+1]);
                ok = true;
            }
        }
    }
}
void selectionSort(){

    for(size_t i=0;i<n-1;i++)
    {
        int mini = i;
        for(size_t j=i+1;j<n;j++)
        {
            if(arr[j] < arr[mini])
            {
                mini = j;
            }
        }
        if(mini != i){
           swap(arr[i] , arr[mini]);
        }
    }
}
void mergesort(int start,int end)
{
    if(start<end)
    {
        int mid=(start+end)/2;
        mergesort(start,mid);
        mergesort(mid+1,end);
        merge(arr,start,mid,end);
    }
}
void merge(T arr[] , int start,int mid,int end)
{
    int n1=mid-start+1;
    int n2=end-mid;
    T l[n1],m[n2];
    for(int i=0;i<n1;i++)
    {
        l[i]=arr[start+i];
    }
    for(int j=0;j<n2;j++)
    {
        m[j]=arr[mid+1+j];
    }
    int i=0;
    int j=0;
    int k=start;
    while(i<n1 && j<n2)
    {
        if(l[i]<m[j])
        {
            arr[k]=l[i];
            k++;
            i++;
        }
        else
        {
            arr[k]=m[j];
            k++;
            j++;
        }
    }
    while(i<n1)
    {
        arr[k]=l[i];
        k++;
        i++;
    }
    while(j<n2)
    {
        arr[k]=m[j];
        k++;
        j++;
    }
}
void countSort(T arr[], int n, int exp)
{
    T output[n]; 
    int i;
    T count[10] = {0};
 
    for (i = 0; i < n; i++)
        count[(arr[i] / exp) % 10]++;

    for (i = 1; i < 10; i++)
        count[i] += count[i - 1];
 
    for (i = n - 1; i >= 0; i--) {
        output[count[(arr[i] / exp) % 10] - 1] = arr[i];
        count[(arr[i] / exp) % 10]--;
    }
 
    for (i = 0; i < n; i++)
        arr[i] = output[i];
}
void radixsort()
{
    int m = getMax(arr, n);
 
    for (int exp = 1; m / exp > 0; exp *= 10)
        countSort(arr, n, exp);
}
int getMax(T arr[], int n)
{
    int mx = arr[0];
    for (int i = 1; i < n; i++)
        if (arr[i] > mx)
            mx = arr[i];
    return mx;
}
void bucketSort()
{
     
    vector<float> b[n];

    for (int i = 0; i < n; i++) {
        int bi = n * arr[i];
        b[bi].push_back(arr[i]);
    }
 
    for (int i = 0; i < n; i++)
        sort(b[i].begin(), b[i].end());
 
    int index = 0;
    for (int i = 0; i < n; i++)
        for (int j = 0; j < b[i].size(); j++)
            arr[index++] = b[i][j];
}
};
int main()
{    
    int r; 
    cout<<"Enter Size of Array: ";
    cin>>r;
    sort_method<int>l(r);
    cout<<"Enter the element of the Array: "<<endl;
    l.input();
    l.BubbleSort();
    l.display();
}
