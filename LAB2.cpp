#include<iostream>
using namespace std;
int main()
{
    int n,x,i=0,count=0;
    cout<<"Enter the size of the array:"<<endl;
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:"<<endl;
    for(int i=0;i<n;i++)
        cin>>arr[i];
    cout<<"Enter the element to search:"<<endl;
    cin>>x;
    for(i=0;i<n;i++)
    {
            if(arr[i]==x)
              {
			  count++;
			    break;
		}
    }
    if(count==1)
    {
	
        cout<<"Element found at position "<<i<<" of array"<<endl;
    }
    else
    {
    cout<<"Element not found in given array"<<endl;	
	}
    return 0;
}
