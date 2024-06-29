#include<iostream>

using namespace std;



int add(int,int);
int sub(int,int);
int mul(int,int);
float div(float,float);

     int main()

    {
	
	int num1,num2;
	char A,S,M,D;
	char choice;   
	char decision='Y';
	
	
    while(decision=='Y'||decision=='y'){
	
	cout<<"\nENTER FIRST NUMBER :";
	cin>>num1;
	cout<<"\nENTER SECOND NUMBER:";
	cin>>num2;
	
	cout<<"\n\nA=ADDITION\n\nS=SUBSTRACTION\n\nM=MULTIPLICATION\n\nD=DIVISION";
	cout<<"\n\nENTER YOUR CHOICE :";
	cin>>choice;
	
	if(choice=='A'){
		cout<<"ADDITION IS:"<<add(num1,num2);}
		
		if(choice=='S'){
		cout<<"SUBTRACTION IS:"<<sub(num1,num2);}

           if(choice=='M'){
		     cout<<" MULTIPLICATION IS:"<<mul(num1,num2);}
			 
			 if(choice=='D'){
		cout<<"DIVISION IS :"<<div(num1,num2);	
	
	}
	cout<<"\n\n\nDO YOU WANT TO MORE OPERATION :";
	cin>>decision;

}
return 0;
}
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b) 

{
	return a-b;
}
int mul(int a,int b)
{
    return a*b;	
}
float div(float a,float b)
{
	return a/b;
}
