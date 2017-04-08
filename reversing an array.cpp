#include<iostream>
using namespace std;
int main()
    {
    int n,i,j,temp;
    
    cin>>n;
    int a[n];
    for(i=0;i<n;i++)
        {
        cin>>a[i];
        
    }
    for(i=0,j=n-1;i<n/2;i++,j--)
        {
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
    }
    for(i=0;i<n;i++)
        {
        cout<<a[i]<<" ";
        
    }
    return 0;
}
/* can also be done like this
#include<bits/stdc++.h> //this header file contains all the header files of c++ if u include this
//no need to include any other but this takes a bit more time to execute so use 
#include<iostream>
#include<algorithm>
typedef int ma;
int main(){
  ma n;
  cin>>n;
  ma arr[n];
  for(ma i=0;i<n;i++) cin>>arr[i];
  reverse(arr,arr+n);
  for(ma i=0;i<n;i++) cout<<arr[i];
}
*/
