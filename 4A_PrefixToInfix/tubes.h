#ifndef STACK_H_INCLUDED
#define STACK_H_INCLUDED

#include <iostream>
using namespace std;


#define Top(S) (S).Top
#define info(S) (S).info


typedef string infotype;

struct stack {
    infotype info[15];
    int Top;
};

void createStack(stack &S);
bool isEmpty(stack S);
bool isFull(stack S);
void push(stack &S, infotype x);
infotype pop(stack &S);
void printInfo(stack S);
bool isOperand(char C);
string prefixToInfix(string prefix, stack &S);


#endif // STACK_H_INCLUDED
