#include "helloclass.h" 
HelloClass::HelloClass(){
	cout<<"I am being created,2333."<<endl;
}

HelloClass::~HelloClass(){
	cout<<"I am being destroyed, orz."<<endl;
}

void HelloClass::sayHello(){
	cout<<"Hello class"<<endl;
}
