//stack has filo(first in last out) processor it has functions pop empty top etc.

#include<iostream>
#include<cstring>
#include<stack>

int main()
{
    std::stack<char>s;
    char str[10]="abcde";
    int len=strlen(str);
    for(int i=0;i<len;i++)
    {
        s.push(str[i]);
    }
    while(!s.empty())
    {
        std::cout<<s.top();
        s.pop();
    }
    return 0;

}