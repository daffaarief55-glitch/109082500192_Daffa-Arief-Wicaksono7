
#ifndef STACK3_H_INCLUDED
#define STACK3_H_INCLUDED

typedef int infotype;

struct Stack {
    infotype info[20];
    int Top;
};

void createStack(Stack &S);
void push(Stack &S, infotype X);
infotype pop(Stack &S);
void printInfo(Stack S);
void balikStack(Stack &S);
void getInputStream(Stack &S);

#endif
