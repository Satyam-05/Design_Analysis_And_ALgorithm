#include<bits/stdc++.h>
using namespace std;

#define max 100
void search( int arr[], int up,int lw,int key);
int c=0;
int main()
{
    int  arr[max];
    int key,n;
    cout<<"enter the size of array:"<<endl;
    cin>>n;
    int lw=0,up=n-1;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"enter the key :"<<endl;
    cin>>key;
    search(arr,up,lw,key);
    return 0;
}
void search(int arr[],int up,int lw,int key)
{   int mid;
    if(up>=lw)
      mid=lw+(up-lw)/2;
    c++;
    if(arr[mid]>key)
    {
        up=mid-1;
        search(arr,up,lw,key);
    }
       if(arr[mid]<key)
    {
        lw=mid+1;
        search(arr,up,lw,key);
    }
    else
      {
          cout<<"key found"<<endl;
          cout<<"Comparisons : "<<c<<endl;
      }

}
