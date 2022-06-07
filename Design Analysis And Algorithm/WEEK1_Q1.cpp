#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,m=0,n,c,i;
    cout<<"enter the number:";
    cin>>t;
    while(m<= t){
        c=0;
        cout<<"enter the size of array:";
        cin>>n;
        int arr[n];
        cout<<"enter the array elements:";
        for( i=0;i<n;i++){
            cin>>arr[i];
        }
        int key;
        cout<<"enter the key to search:";
        cin>>key;
         for( i=0;i<n;i++){
             c++;
            if(key==arr[i]){
                cout<<"Key found\n";
                cout<<"Comparisions : "<<c;
                break;
            }
         }
         if(i==n){
            cout<<"Key not found"<<endl;
            cout<<"Comparisions : "<<c<<endl;
         }

        m++;
        cout<<endl;
    }
}
