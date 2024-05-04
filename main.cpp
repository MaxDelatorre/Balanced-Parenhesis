#include <iostream>
#include <stack>
#include <string>
using namespace std;

bool CheckParenthesis(const string& expr){
    stack<char> p;
    for (char parenthesis : expr){
        if (parenthesis == '('){
            p.push(parenthesis);
        } else if(parenthesis == ')'){
            if (p.empty()){
                return false;
            }
            char top = p.top();
            p.pop();
            if(parenthesis == ')' && top != '('){
                return false;
            }
        }
    }
    return p.empty();
}
int main() {
    string expression;
    cout << "Enter an expression";
    cin >> expression;

    if(CheckParenthesis(expression)){
        cout << "Balanced";
    } else {
        cout << "Not balanced";
    }
    return 0;

}