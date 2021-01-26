/*Eliezer binti Maingkin
BI19110061
Lab Assignment 3 - Part 1 Exercise 2 */

#include <iostream>
#include <string>
#include <stack>

using namespace std;

//function to verify parenthesis symbols are opened and closed perfectly
bool pairSymbol(char opening,char closing)
{
	if(opening == '(' && closing == ')') 
		return true;
	else if(opening == '{' && closing == '}') 
		return true;
	else if(opening == '[' && closing == ']')
		return true;
	else
		return false;
}

//function to verify input parenthesis symbols are opened and closed perfectly
bool paranthesisBalanced(string symbol)
{
	stack<char> S;
	for(int i =0;i<symbol.length();i++)
	{
		if(symbol[i] == '(' || symbol[i] == '{' || symbol[i] == '[')
			S.push(symbol[i]);
		else if(symbol[i] == ')' || symbol[i] == '}' ||symbol[i] == ']')
		{
			if(S.empty() || !pairSymbol(S.top(),symbol[i]))
				return false;
			else
				S.pop();
		}
	}
	return S.empty() ? true:false;
}

int main(){	
    string inputSymbol;
	cout<<"Enter an expression of parenthesis symbols:  ";
	cin>> inputSymbol;
	if(paranthesisBalanced(inputSymbol))
		cout<<"True\n";
	else
		cout<<"False\n";
    return 0;
}
