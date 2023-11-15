#include<bits/stdc++.h>
using namespace std;

int main(){
    char ch;
    cout<<"Hi! How can I help you with?"<<endl;
    cin>>ch;
    int a,b;
    cout<<"Enter number1: ";
    cin>>a;
    cout<<endl;
    cout<<"Enter number2: ";
    cin>>b;
    cout<<endl;
    switch(ch){
        case '+':
          cout<< a+b <<endl;
          break;
        case '-':
          cout<< a-b <<endl;
          break;
        case 'x':
          cout<< a*b <<endl;
          break;
        case '/':
          cout<< a/b <<endl;
          break;
        case '^':
          cout<< pow(a,b) <<endl;
          break;
        default:
          cout<<"Error 404"<<endl;
          break;
    }
    return 0;
}
