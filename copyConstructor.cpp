#include<bits/stdc++.h>
using namespace std;
class A{
	private:
		int *data;
	public:
		A(){
			this->data=nullptr;
		}
		A(int val){
			data=new int(val);
		}
		A(A &obj){
			if(obj.data){
				data=new int;
				*data=*obj.data;	
			} else {
				data=nullptr;
			}

		}
		void setdata(int val){
			*data=val;
		}
		void showData(){
			cout<<"data is "<<*data<<endl;
		}
		~A () {
			delete data;
			cout<<"data got deleted"<<endl;
		}
};

int main(){
	A a(10);
	A b(a);
	a.showData();
	b.showData();	
	a.setdata(20);
	a.showData();
	b.showData();
	return 0;
}

