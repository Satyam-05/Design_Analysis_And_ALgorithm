#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cout<<"enter the no of test cases:";
    cin>>t;

    while(t)
    {
        int n;
        cout<<"enter the size of array:";
        cin>>n;
        cout<<"enter the elements of array:";
        int arr[n];
        for(int i=0; i<n; i++)
            cin>>arr[i];


        int key;
        cout<<"enter the key:";
        cin<<key;

        int occur1=0,occur2=0,l=0, r=n;

        while(l<=r)
        {
            int mid = l + (r-l)/2;
            if(arr[mid]>key){
                r=mid-1;
            }
            else if(arr[mid]<key)
                l=mid+1;
            else
            {
                occur1=mid;
                occur2=mid;
                while(arr[occur1]==arr[mid])
                    occur1--;
                while(arr[occur2]==arr[mid])
                    occur2++;
                    break;
            }
        }

        cout<<key<<" occurs "<< (occur2-occur1)-1 << " times");

    t--;
    }
}
