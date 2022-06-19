#include<bits/stdc++.h>
using namespace std;
int minEle(int A[],int l,int h)
{
	int n=h-l+1;
	if(n==1||A[0]<A[n-1]) return 0;
	 if(n==2)
	 {
	 	if(A[0]<A[1]) return 0;
	 	else return 1;
	 }
	 int mid;
	 while(l<=h)
	 {
	 	 mid=l+(h-l)/2;
	 	if(mid>0 && mid<n-1)
	 	{
	 		
	 	 if(A[mid]<A[mid+1] && A[mid]<A[mid-1] ) return mid;
		 else if(A[0]<A[mid]) l=mid+1;
		 else h=mid-1;	
	 		
		}
	    else
	    return mid;
		
		
	 }
	// return mid;
}
int bs(int A[],int l,int h,int B)
{
	while(l<=h)
	{
		int mid=l+(h-l)/2;
		if(A[mid]==B) return mid;
		else if(A[mid]<B) l=mid+1;
		else h=mid-1;
	}
	return -1;
}
int main()
{
	int num;
	cin>>num;
	int A[num];
	for(int i=0;i<num;i++)
	cin>>A[i];
	int index=minEle(A,0,num-1);
	cout<<index<<endl;
	int B;
	cin>>B;
	if(B>A[0])
	{
		int res=bs(A,0,index-1,B);
		cout<<res<<endl;
	}
	else
	{
		int res=bs(A,index,num-1,B);
		cout<<res<<endl;
	}

  return 0;
}

