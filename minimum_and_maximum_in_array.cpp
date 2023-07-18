#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
    int n,arr[10];
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+n);
    cout<<"minimum element "<<arr[0];
    cout<<"\nmaximum element "<<arr[n-1];

}