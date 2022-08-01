#include <iostream>
using namespace std;
int main()
{
    int n,i;
    cin>>n;
    int arr[n],neg_index = 0,pos_index=0,aux[n]={0},negative_index=0,positive_index=(n-1);
    for(i=0;i<n;i++)
    {
        cin>>arr[i];
        if(arr[i]<0)
        {
            aux[negative_index] = arr[i];
            negative_index++;
        }
        else if(arr[i]>0)
        {
            aux[positive_index] = arr[i];
            positive_index--;
        }
    }
    for(i=0;i<n;i++)
    {
        cout<<aux[i]<<" ";
    }
    cout<<endl;
    return 0;
}
