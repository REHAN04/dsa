#include<bits/stdc++.h>
using namespace std;
void print(int start,int end,int &result,int arr[]){
	for(int i=start;i<end;i++){
		result+=arr[i];
	}
}
int main(){
	int arr[10]={1,2,3,4,5,6,7,8,9,10};
	int sum1=0;
	int sum2=0;
	thread t1(print,0,5,ref(sum1),arr);
	thread t2(print,5,10,ref(sum2),arr);
//	cout<<"The value of sum1 is "<<sum1<<endl;
//	cout<<"The value of sum2 is "<<sum2<<endl;
	t1.join();
	t2.join();
	cout<<"The value of sum1 is "<<sum1<<endl;
	cout<<"The value of sum2 is "<<sum2<<endl;
	int totalSum=sum1+sum2;
	cout<<"The value of totalSum is "<<totalSum<<endl;
	
	return 0;
}

