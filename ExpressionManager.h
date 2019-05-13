#pragma once
#include "ExpressionManagerInterface.h"
#include <vector>

using namespace std;

class ExpressionManager : public ExpressionManagerInterface {
public:
	ExpressionManager() {};
	~ExpressionManager() {};

	bool isBalanced(string expression);
	string postfixToInfix(string postfixExpression);
	string postfixEvaluate(string postfixExpression);
	string infixToPostfix(string infixExpression);

	vector<string> parseTokens(string expression);

	bool isLeftParen(string expression);
	bool isRightParen(string expression);
	bool isPair(string left, string right);
	bool isOperator(string expression);
	bool isNumber(string expression);
	int precedence(string expression);

};
};
