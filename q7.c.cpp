#include<iostream>
using namespace std;
int main()
{//funcn initializn-----------------------------------
	void toUpper(char ch);	
	void toLower(char ch);
//----------------------------------------------------
	char ch;//for input from user 
	cout<<"\n plz input a character in english alphabet        ";
	cin>>ch;
	if(ch>=65 && ch<=90)
	{toLower(ch);}
	if(ch>=97 && ch<=122)
	{toUpper(ch);}


	return 0;

}

//---------------------------------------////////////
//funcn to  return the uppercase of the inputChar received.
void toUpper(char ch)
{	if(ch>=97 && ch<=122)//from ascii defn of lower case
	{  cout<<"\n you enterd lower case"<<endl;
		char d=ch-32;//d stores upper case
	   cout<<"the uppercase of inptchar is :   "<<d<<endl;

	}
	else
	cout<<"\n u already entered uppercase"<<endl;

}

 
//---------------------------------------------------
//funcn to  return the lowercase of the inputChar received.
void toLower(char ch)
{	if(ch>=65 && ch<=90)//from ascii defn of lower case
	{  cout<<"\n you enterd upper case"<<endl;
	   char d=ch+32;//d stores lower case of it
	   cout<<"the lowercase of inptchar is :   "<<d<<endl;

	}
	else
	cout<<"\n u already entered lowercase"<<endl;

} 

