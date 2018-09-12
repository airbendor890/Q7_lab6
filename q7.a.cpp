//funcn to  return the uppercase of the inputChar received. 
#include<iostream>
using namespace std;
int main()
{	void toUpper(char ch);//funcn initializn
 	char s;
	cout<<"enter a lower case \n           ";
	cin>>s;		//input frm usr
        toUpper(s);	//function invocation



}





void toUpper(char ch)
{	if(ch>=97 && ch<=122)//from ascii defn of lower case
	{  cout<<"\n you enterd lower case"<<endl;
		char d=ch-32;//d stores upper case
	   cout<<"the uppercase of inptchar is :   "<<d<<endl;

	}
	else
	cout<<"\n u already entered uppercase"<<endl;

}
