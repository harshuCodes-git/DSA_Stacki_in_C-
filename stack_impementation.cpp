#include<iostream>
using namespace std;

#define n 100

class stack{
	int*arr;
	int top;
//	int n;
	public:
		stack(){
			arr=new int [n];
			top=-1;
			
		}
		
		void push(int x ){
			
			if(top==n-1){
				cout<<"Stack overflow"<<endl;
				return;
			}
			
			top++;
			arr[top]=x;
			
		}
		
		void pop(){
			if(top==-1){
				cout<<"No elements to pop"<<endl;
				
			}
			
			top--;
			
		}
		
		int Top()
		{
			
			if(top==-1){
				cout<<"no Element in Stack"<<endl;
				return -1;
				
			}
			return arr[top];
		}
		
		bool empty(){
			return top==-1;
		}
};

int main(){
	stack st;
	st.push(3);
	cout<<st.Top()<<endl;
	st.push(4);
	cout<<st.Top()<<endl;
	st.push(10);
	cout<<st.Top()<<endl;
	st.pop();
	cout<<st.Top()<<endl;
	st.push(8);
	cout<<st.Top()<<endl;

	
	
	return 0;
}
