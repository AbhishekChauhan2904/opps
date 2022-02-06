#include<bits/stdc++.h>
using namespace std;
#include "class.cpp"
int main(){
	fraction f1(10,2);
	fraction f2(15,4);
	fraction f3=f1.add(f2);
	f1.print();
	f2.print();
	f3.print();
	fraction f4=f1+f2;
	f1.print();
	f2.print();
	f4.print();
	fraction f5=f1*f2;
	f5.print();
	if(f1==f2){
		cout<<"equal"<<endl;
	}
	else{
		cout<<"not equal"<<endl;
	}
	return 0;
}