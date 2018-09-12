//funcn to  return the lowercase of the inputChar received.
#include<iostream>
using namespace std;
int main()
{	void toLower(char ch);//funcn initializn
	char s;
	cout<<"\n enter a uppercase character in eng alphabt       ";
	cin>>s;//inpt frm usr
	toLower(s);	//funcn invocation

	return 0;


} 
void toLower(char ch)
{	if(ch>=65 && ch<=90)//from ascii defn of lower case
	{  cout<<"\n you enterd upper case"<<endl;
	   char d=ch+32;//d stores lower case of it
	   cout<<"the lowercase of inptchar is :   "<<d<<endl;

	}
	else
	cout<<"\n u already entered lowercase"<<endl;

}
