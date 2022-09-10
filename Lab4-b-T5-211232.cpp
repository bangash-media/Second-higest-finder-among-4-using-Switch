#include <iostream>
using namespace std;
/*program to read four integer numbers then find and print the second maximum
number among these numbers*/
int main() 
{
	int option;
	double num1,num2,num3,num4;      // integer is a non fractional number so using int
	cout<<"\n\n\n\t\tSecond Highest Integer Indentifier\n\n\n";
	cout<<"********************************************************";
	cout<<"\n\n\t\tEnter first Number: "; cin>>num1;  //first input from user
	cout<<"\n\t\tEnter second Number: "; cin>>num2;   //second input from user
	cout<<"\n\t\tEnter third Number: "; cin>>num3;    //third input from user
	cout<<"\n\t\tEnter fourth Number: "; cin>>num4;   //fourth input from user
	cout<<endl<<endl;
	cout<<"********************************************************\n\n";  // used for better display
	if (num1<num2 && num1>num3 && num1>num4 || num1<num3 && num1>num2 && num1>num4 || num1<num4 && 
	    num1>num2 && num1>num3) //num1 is less than 1 entaty and greater than 2
	option=1; //this will lead to the "case 1"
	else if (num2<num1 && num2>num3 && num2>num4 || num2<num3 && num2>num1 && num2>num4 || num2<num4 &&
	    num2>num1 && num2>num3) //num2 is less than 1 entaty and greater than 2
	option=2; //this will lead to the "case 2"
	else if (num3<num1 && num3>num2 && num3>num4 || num3<num2 && num3>num1 && num3>num4 || num3<num4 && 
	    num3>num1 && num3>num2) //num3 is less than 1 entaty and greater than 2
	option=3; //this will lead to the "case 3"
	else if (num4<num1 && num4>num2 && num4>num3 || num4<num2 && num4>num3 && num4>num1 || num4<num3 && 
	    num4>num2 && num4>num1) //num4 is less than 1 entaty and greater than 2
	option=4; //this will lead to the "case 4"
	
	switch (option)
    {
    	case 1: //when first "if" is satisfied , will lead to this case
    		cout<<"\t\t"<<num1<<" is second maximum number among mentioned numbers";
    		break;
    	case 2: //when second "else if" is satisfied , will lead to this case
    		cout<<"\t\t"<<num2<<" is second maximum number among mentioned numbers";
    		break;
    	case 3: //when third "else if" is satisfied , will lead to this case
    		cout<<"\t\t"<<num3<<" is second maximum number among mentioned numbers";
    		break;
    	case 4: //when third "else if" is satisfied , will lead to this case
    		cout<<"\t\t"<<num4<<" is second maximum number among mentioned numbers";
    		break;
	}
	return 0;
}
