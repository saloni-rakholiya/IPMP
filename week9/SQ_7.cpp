#include <bits/stdc++.h>
using namespace std;

int precedence(char a){
    if(a == '*'||a == '/')
    return 2;
    if(a == '+'||a == '-')
    return 1;
    return 0;
}
 
int solve(int a, int b, char op){
    switch(op){
    	case '*': return a * b;
        case '/': return a / b;
        case '+': return a + b;
        case '-': return a - b;
    }
}
 
int evaluate(string ss){
    int i;
    stack <int> v;
    stack <char> ops;
    for(i = 0; i < ss.length(); i++){
        if(ss[i] == ' ')
            continue;
        else if(ss[i] == '('){
            ops.push(ss[i]);
        }
        else if(isdigit(ss[i])){
            int val = 0;
            while(i < ss.length() &&
                        isdigit(ss[i]))
            {
                val = (val*10) + (ss[i]-'0');
                i++;
            }
            v.push(val);
              i--;
        }
         
        else if(ss[i] == ')')
        {
            while(!ops.empty() && ops.top() != '(')
            {
                int val2 = v.top();
                v.pop();
                int val1 = v.top();
                v.pop();
                char op = ops.top();
                ops.pop();
                v.push(solve(val1, val2, op));
            }
             
            if(!ops.empty())
               ops.pop();
        }
        else
        {
            while(!ops.empty() && precedence(ops.top())
                                >= precedence(ss[i])){
                int val2 = v.top();
                v.pop();
                 
                int val1 = v.top();
                v.pop();
                 
                char op = ops.top();
                ops.pop();
                 
                v.push(solve(val1, val2, op));
            }
            ops.push(ss[i]);
        }
    }
     
    while(!ops.empty()){
        int val2 = v.top();
        v.pop();
                 
        int val1 = v.top();
        v.pop();
                 
        char op = ops.top();
        ops.pop();
                 
        v.push(solve(val1, val2, op));
    }

    return v.top();
}
 
