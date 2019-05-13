#include <iostream>
#include "ExpressionManager.h" 
#include <stack>

using namespace std;

bool ExpressionManager::isBalanced(string expression) {
	/*
* Checks whether an expression is balanced on its parentheses
*
* - The given expression will have a space between every number or operator
*
* @return true if expression is balanced
* @return false otherwise
*/
}

string ExpressionManager::postfixToInfix(string postfixExpression) {

/**
* Converts a postfix expression into an infix expression
* and returns the infix expression.
*
* - The given postfix expression will have a space between every number or operator.
* - The returned infix expression must have a space between every number or operator.
* - Redundant parentheses are acceptable i.e. ( ( 3 * 4 ) + 5 ).
* - Check lab requirements for what will be considered invalid.
*
* return the string "invalid" if postfixExpression is not a valid postfix expression.
* otherwise, return the correct infix expression as a string.
*/
}

string ExpressionManager::postfixEvaluate(string postfixExpression) {
	/*
* Evaluates a postfix expression returns the result as a string
*
* - The given postfix expression will have a space between every number or operator.
* - Check lab requirements for what will be considered invalid.
*
* return the string "invalid" if postfixExpression is not a valid postfix Expression
* otherwise, return the correct evaluation as a string
*/
}

string ExpressionManager::infixToPostfix(string infixExpression) {
	/*
* Converts an infix expression into a postfix expression
* and returns the postfix expression
*
* - The given infix expression will have a space between every number or operator.
* - The returned postfix expression must have a space between every number or operator.
* - Check lab requirements for what will be considered invalid.
*
* return the string "invalid" if infixExpression is not a valid infix expression.
* otherwise, return the correct postfix expression as a string.
*/
}

bool ExpressionManager::isLeftParen(string expression) {
	//tells if the string we're passed is an open parenthesis
	// Expression: "{" "[" "]" "}"
		//valid: "{", "(", "["
	if (expression == "{" || expression == "(" || expression == "[") {
		return true;
	}
	return false;
}

bool ExpressionManager::isRightParen(string expression) {

}
bool ExpressionManager::isPair(string left, string right) {
	if (((left == "{") && (right == "}")) ||
		((left == "(") && (right == ")")) ||
		((left == "[") && (right == "]")) ) {
		return true;
	}
	return false;

}

bool ExpressionManager::isOperator(string expression) {

}

bool ExpressionManager::isNumber(string expression) {

}

int ExpressionManager::precedence(string expression) {

}

vector<string> ExpressionManager::parseTokens(string expression) {
	stringstream ss(expression);
	string token;
	vector<string> tokens;
	while (getline(ss, token, ' '))
	{
		tokens.push_back(token);
	}
	return tokens;
}