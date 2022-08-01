#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n]={0},negative_index=0,positive_index=(n-1),temp=0;
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    int swap_value=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<0)
        {
            swap_value = 0;

        }
        else if(arr[i]>0)
        {
            swap_value = 1;
        }
        if(swap_value==1)
        {
            if(i<positive_index)
            {
            swap(arr[i],arr[positive_index]);
            positive_index--;
            }
        }
        else if(swap_value==0)
        {
            if(i>negative_index)
            {
                 swap(arr[i],arr[negative_index]);
                 negative_index++;
            }
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    return 0;
}
