#include<bits/stdc++.h>
using namespace std;
int s=0;
void quicksort(int arr[] , int low , int high , int *c);
int partition(int arr[] , int low , int hight, int *c);
void swap(int *a,int *b);
int main(){
    int t,n;
    cout<<"Enter the test Cases : "<<endl;
    cin>>t;
    while(t){
        s=0;
        int c=0;
        cout<<"Enter the number of element in array :"<<endl;
        cin>>n;
        int arr[n];
        cout<<"Enter the element in array :"<<endl;

        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int low=0,high=n-1;
        quicksort(arr,low,high,&c);
        for(int i=0;i<n;i++){
            cout<<arr[i]<<" ";
        }
            cout<<"Comparision : "<<c;
            cout<<"Swaps : "<<s;

    t--;
    }
}
void swap(int *a,int *b){
    s++;
    int temp=*a;
    *a=*b;
    *b=temp;
}
void quicksort(int arr[] , int low , int high , int *c){
    if(low<high){
        int p=partition(arr,low,high,c);
        quicksort(arr,low,p-1,c);
        quicksort(arr,p+1,high,c);
    }
}
int partition(int arr[] , int low , int high, int *c){
    int i=low-1;
    int pivot=arr[high];
    for(int j=i+1;j<high;j++){
        (*c)++;
        if(arr[j]<pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    }
        swap(&arr[i+1],&arr[high]);
    return i+1;
}
