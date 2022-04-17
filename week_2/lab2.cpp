/*. Given a sorted array of positive integers, design an algorithm and implement it using a program 
to find three indices i, j, k such that arr[i] + arr[j] = arr[k]. 
Input format: The first line contains number of test cases, T. For each test case, there will be two 
input lines. First line contains n (the size of array). Second line contains space-separated integers 
describing array.
Output: The output will have T number of lines. For each test case T, print the value of i, j and k, if 
found else print “No sequence found”.*/
#include <bits/stdc++.h>
using namespace std;
int main()
{
    int x;
    cin >> x;
    while (x--)
    {
        int n, j;
        cin >> n;
        int arr[n];
        vector<int> v;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        for (int i = 0; i < n; i++)
        {
            int k = n - 1;
            j = i + 1;
            while (j < n)
            {
                if (arr[i] + arr[j] == arr[k])
                {
                    v.push_back(i + 1);
                    v.push_back(j + 1);
                    v.push_back(k + 1);
                    break;
                }
                else if (arr[i] + arr[j] > arr[k])
                {
                    j++;
                    k = n - 1;
                }
                else
                    k--;
            }
        }
        if (v.empty())
        {
            cout << "No sequence found"<<endl;
        }
        else
        {
            for (auto &it : v)
                cout << it << " ";
                cout<<endl;
        }
    }
}
