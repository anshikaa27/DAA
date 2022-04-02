#include<iostream>
using namespace std;
int Binary_search(int A[],int l,int r,int x)
{
    if(r>=l)
    {
        int mid=(l+r)/2;
        if(A[mid]==x)
        {
        int ind = mid;
        int Count=1;
        int left=ind-1;
        int right=ind+1;
    while(left>l && A[left]==x)
    {
        left--;
         Count++;
    }
    while(right<r && A[right]==x)
    {
        right++;
        Count++;
    }
    cout<<x<<"-"<<Count<<endl;
    return 0;
    }
    else if(A[mid]>x)
    return Binary_search(A,l,mid-1,x);
    else
    return Binary_search(A,mid+1,r,x);
    }
    return -1;

}
int main()
{
    int T;
    cin>>T;
    for(int i=0;i<T;i++)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int num;
        cin>>num;

        int val;
       val=Binary_search(arr,0,n,num);
       if (val==-1)
        cout<<"series Not Found"<<endl;
    }
    return 0;

}
