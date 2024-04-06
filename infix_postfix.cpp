#include <iostream>
#include <string>
#include <stack> 
#include <regex>
using namespace std; 


int main(){

    stack<int> postack ; 
    stack<string> opstack ; 
    string str[50];
    char c; 
    string operators ="[\\(]";
    int i = 0 ; 

    do{
        c = getchar();
        str[i] = c; 
        i++;
    }while(c !='\n' || c!='\0' );

    for (int j = 0 ; j<=i;j++){
        if (str[i] =="("){
            opstack.push(str[i]);
        }
        if (str[i]==regex(operators)){
            postack.push(str[i]);
        }
    }

}