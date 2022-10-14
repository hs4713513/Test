#include<iostream>
#include<cstdlib>
using namespace std;

void addatindex(int*arr,int &size,int index)
{
    arr=(int*)realloc(arr,(++size)*sizeof(int));
    for(int i=size-1;i>index;i--)
    {
        arr[i]=arr[i-1];
    }
    cout<<"enter value at index"<<endl;
    cin>>arr[index];

}
void deleteatindex(int*arr,int &size,int index)
{
    for(int i=index;i<size-1;i++)
    {
        arr[i]=arr[i+1];
    }
    arr=(int*)realloc(arr,(--size)*sizeof(int));
}
void display(int*arr,int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<" "<<arr[i];
    }
    cout<<endl;
}
int main()
{
    int*arr;
    int size;
    cout<<"enter size"<<endl;
    cin>>size;
    arr=(int*)malloc((size)*sizeof(int));
    cout<<"enter elements"<<endl;
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }
    display(arr,size);
    addatindex(arr,size,2);
    display(arr,size);
    deleteatindex(arr,size,3);
    display(arr,size);
    return 0;
}