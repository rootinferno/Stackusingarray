#include<iostream>

using namespace std ;

#define size 100
int i,n ;
int arr[size];
int top = -1 ;

bool isempty()
{
    if (top==-1)
        return true;
    else
        return false;
}

void push(int n)
{
    if(top==size-1)
        cout<< "no more entries can be entertained" << endl;
    else
        top++ ;
        arr[top] = n ;
}

void pop()
{
    if(isempty())
        cout<< "no more deletion can take place" << endl ;
    else
        top-- ;
}

void displaystack()
{
    if(isempty())
        cout<<"there is no stack to show" << endl;
    else
       {
           for(i=top;i>=0;i--)
        cout<< arr[i] << endl;
        }
}
void showtop()
{
    if(top==-1)
        cout<<"cannot show top/ no stack available" << endl;
    else
        cout<< "top of the stack is:" << arr[top] << endl;
}


int main()
{
    push(98);
    push(65);
    push(44);
    push(21);

    pop();
    displaystack() ;
    showtop();

    return 0;
}

