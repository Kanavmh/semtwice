//wap to make a calculator
#include<iostream>
#include<string>
using namespace std;
int main(){
    int val,a,b;
    string name;
    cout<<"User: ";
    getline(cin,name);
	cout<<"Good morning "<<name<<", what would you like to do today "<<endl;
	cout<<"1 to add"<<endl<<"2 to subtract"<<endl<<"3 to divide"<<endl<<"4 to mutiply"<<endl<<"5 to exit"<<endl;
	cin>>val;
	if(val!=5){
	    cout<<"Enter number 1:";
	    cin>>a;
	    cout<<"Enter number 2:";
	    cin>>b;
	    if(val==1){
	        int sum=a+b;
	        cout<<sum<<endl;
	    }else if(val==2){
	        int sub=a-b;
	        cout<<sub<<endl;
	    }else if(val==3){
	        int ans=a/b;
	        cout<<ans<<endl;
	    }else if(val==4){
	        int mul=a*b;
	        cout<<mul<<endl;
	    }
	}else{
	    cout<<"Exiting...";
	}
	return 0;
	}
