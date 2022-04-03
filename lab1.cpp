//lab1.1
#include<iostream>
using namespace std;
int Linear_search(int arr[],int n,int val)
{
    for(int i=0;i<n;i++)
    {
        if(arr[i]==val)
        {
            return i;
        }
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
        int val;
        cin>>val;
        int m;
        m=Linear_search(arr,n,val);
        if(m==-1)
            cout<<"Value not Found"<<endl;
        else
            cout<<"Present "<<m+1<<endl;
    }
    return 0;

}


//lab1.2
#include<iostream>
using namespace std;
int Binary_search(int arr[],int l,int r,int x)
{
    while(l<=r)
    {
        int m=(l+r)/2;
        if(arr[m]==x)
            return m;
        if(arr[m]<x)
            l=m+1;
        else
            r=m-1;

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
        int val;
        cin>>val;
        int m;
        m=Binary_search(arr,0,n,val);
        if(m==-1)
            cout<<"Value not Found"<<endl;
        else
            cout<<"Present "<<m+1<<endl;
    }
    return 0;

}

//lab 1.3
#include<bits/stdc++.h>
using namespace std;
void Jump_search(int arr[],int n,int key)
{
    int st=0;
    int i=0,comparisons=0;
    int fl=0;
    int End=pow(2,i);
    while(arr[End]<=key && End<n)
    {
        ++comparisons;
        st=End;
        ++i;
        End=pow(2,i);
        if(End>n-1)
            End=n;

    }
    for(int j=st;j<End;j++)
    {
        if(arr[j]==key)
        {
            fl=true;
            break;
        }
    }
    if(fl)
        cout<<"Present "<<comparisons<<endl;
        else
            cout<<"Not Present "<<comparisons<<endl;
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
        int val;
        cin>>val;
        Jump_search(arr,n,val);

    }
    return 0;
}
