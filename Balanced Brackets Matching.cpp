#include<bits/stdc++.h>
using namespace std;

unordered_map<char, int> symbol = {{'[',-1}, {'{',-2}, {'(',-3},
    {']',1}, {'}',2}, {')',3}
};

bool isBalanced(string &s)
{
    stack<char> stk;

    for(char bracket : s)
    {
        if(symbol[bracket] < 0) stk.push(bracket);
        else
        {
            if(stk.empty())
            {
                return false;
            }

            char top = stk.top();
            stk.pop();

            if(symbol[top] + symbol[bracket] != 0)
            {
                return false;
            }
        }
    }

    if(stk.empty()) return true;
    else return false;
}

int main()
{
    string s;
    cin>>s;

    if(isBalanced(s)) cout<<"Balanced"<<endl;
    else cout<<"Unbalanced"<<endl;

    main();

    return 0;
}
