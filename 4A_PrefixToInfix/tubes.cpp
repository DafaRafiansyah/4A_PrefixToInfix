#include "tubes.h"

void createStack(stack &S){
    Top(S) = 0;
}

bool isEmpty(stack S){
    if (Top(S) == 0) {
        return true;
    } else {
        return false;
    }
}

bool isFull(stack S){
    if (Top(S) == 15) {
        return true;
    } else {
        return false;
    }
}

void push(stack &S, infotype x){
    if (isFull(S) == false) {
        Top(S) = Top(S) + 1;
        info(S)[Top(S)] = x;
    }
}

infotype pop(stack &S){
    infotype x;
    x = info(S)[Top(S)];
    Top(S) = Top(S) - 1;
    return x;
}

void printInfo(stack S){
    int i;
    for (i=Top(S); i>=1; i--) {
        cout << info(S)[i];
    }
}

bool isOperand(char c){
    if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) {
        return true;
    } else {
        return false;
    }
}

infotype prefixToInfix(string prefix, stack &S){
    int len = prefix.size();
    int i;
    for (i = len-1; i>=0; i--) {
        if (isOperand(prefix[i])) {
            push(S, string(1, prefix[i]));
        } else {
            string operand1;
            operand1 = info(S)[Top(S)];
            pop(S);
            string operand2;
            operand2 = info(S)[Top(S)];
            pop(S);
            string x;
            x = "(" + operand1 + string(1,prefix[i]) + operand2 + ")";
            push(S, x);
        }

    }
    return info(S)[Top(S)];
}
