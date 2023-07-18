#include <iostream>
#include <algorithm>
using namespace std;
void sort012(int a[], int n)
    {
        int z=0,o=0,t=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
                z++;
            else if(a[i]==1)
                o++;
            else if(a[i]==2)
                t++;
        }
        for(int i=0;i<z;i++)
        {
            a[i]=0;
        }
        for(int i=z;i<z+o;i++)
        {
            a[i]=1;
        }
        for(int i=o+z;i<n;i++)
        {
            a[i]=2;
        }
    }
    
int main()
{
    int n, arr[10];
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sort012(arr,n);
    for(int i=0;i<n;i++)
    {
        cout<<" "<<arr[i];
    }
}