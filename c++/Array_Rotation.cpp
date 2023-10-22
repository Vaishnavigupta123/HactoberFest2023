#include <bits/stdc++.h>
using namespace std;

void rotate_by_one(int arr[],int n)
{
  int temp = arr[n-1];
  int i;
  for(i=n-1;i>0;i--)
  {
    arr[i]=arr[i-1];
  }
  arr[i] = temp;
}

int main()
{
  int t;cin>>t;
  while(t--)
  {
    int n,k;cin>>n>>k;
    k%=n;
    int arr[n];
    for(int i=0;i<n;i++)
      cin>>arr[i];

    for(int i=0;i<k;i++)
    {
      rotate_by_one(arr,n);
    }

    for(int i=0;i<n;i++)
      cout<<arr[i]<<" ";
    cout<<"\n";
  }

  return 0;
}
