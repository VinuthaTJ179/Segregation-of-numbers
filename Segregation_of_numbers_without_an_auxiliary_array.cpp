#include <iostream>
using namespace std;
int main()
{
    int n,i,negative_nos=0;
    cout<<"Enter the number of elements in an array:"<<endl;
    cin>>n;
    int arr[n]={0},negative_index=0,positive_index=(n-1),temp=0;
    cout<<"Enter the elements:"<<endl;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]>0)
        {
            positive_nos++;
        }
        else if(arr[i]<0)
        {
            negative_nos++;
        }
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            if(i>negative_index)
            {
                 swap(arr[i],arr[negative_index]);
                 negative_index++;
            }

        }
        else if(arr[i]>0)
        {
            if(i<positive_index)
            {
            swap(arr[i],arr[positive_index]);
            positive_index--;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        if((i<negative_nos)&&(arr[i]>0))
        {
            swap(arr[i],arr[n-i-1]);
        }
        
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}

