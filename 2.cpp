#include<iostream>
using namespace std;
int main()
{
  int arr[100], fmax=INT_MIN,smax=INT_MIN,fmin=INT_MAX,smin=INT_MAX,n;
  cout<<"Enter the no. of elements you want to enter = ";
  cin>>n;
  cout<<"Enter Elements of Array = ";
  for(int i=0; i<n; i++)
  {
      cin>>arr[i];
  }
  for(int i=0; i<n; i++)
  {
      if(arr[i]>fmax)
      {
          smax = fmax;
          fmax = arr[i];
      }
      else if(smax<arr[i])
      {
          smax = arr[i];
      }
      if(arr[i]<fmin)
      {
          smin = fmin;
          fmin = arr[i];
      }
      else if(smin>arr[i])
      {
          smin = arr[i];
      }
  }
  cout<<"Second max and Second min in array is = "<<smax<<" "<<smin;
  return 0;
}
