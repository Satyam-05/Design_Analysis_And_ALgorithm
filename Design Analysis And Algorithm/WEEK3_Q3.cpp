#include<bits/stdc++.h>
using namespace std;
void mergeSort(int A[],int l, int r);
void merge(int A[],int l,int m,int r);
void findDuplicate(int A[],int n);
int main()
{
 int t;
 cout<<"enter the test  cases:"<<endl;
 cin<<t;
 while(t--)
 {
  int n,i;
  cout<<"Input array limit: "<<endl;
  cin>>n;
  int A[n];
  cout<<"Input array elements: "<<endl;
  for(i=0;i<n;i++)
  cin>>A[i];
  findDuplicate(A,n);
 }

}
void mergeSort(int A[],int l, int r)
{
if(l<r)
{
int m=l+(r-l)/2;
mergeSort(A,l,m);
mergeSort(A,m+1,r);
merge(A,l,m,r);
}
}

void merge(int A[],int l,int m,int r)
{
int n1=m-l+1;
int n2=r-m;
int L[n1],R[n2],i;
for(i=0;i<n1;i++)
    L[i]=A[l+i];
for(i=0;i<n2;i++)
    R[i]=A[m+1+i];

    int j,k;
    i=0;j=0;k=l;  //k=0
    while(i<n1 && j<n2)
    {
        if(L[i]<=R[j])
        {
            A[k]=L[i];
            i++;
            k++;
        }
        else
        {
            A[k]=R[j];
            j++;
            k++;
        }
    }
    while(i<n1)
    {
        A[k]=L[i];
        i++;
        k++;
    }
    while(j<n2)
    {
        A[k]=R[j];
        j++;
        k++;
    }
    }

void findDuplicate(int A[],int n)
{
mergeSort(A,0,n-1);
int flag=0,i;
for(i=0;i<n-1;i++)
{
if(A[i]==A[i+1])
{
    flag=1;
    break;
}
}
if(flag==1)
    cout<<"YES";
else
    cout<<"NO";
}
