#include<iostream>  
#include<stack>  
#include<queue>  
using namespace std;  
int main()  
{   int flag=1;
    stack<char> s;  
    queue<char> t;  
    char c;  
    int i=0;  
    while((c=getchar())!='\n')  
    {  
        s.push(c);  
        t.push(c);  
        i++;  
    }  
    while(i--)  
    {  
        if(s.top()==t.front())  
            {s.pop();  t.pop(); }  
        else { flag=0;break;}  
    }  
    cout<<flag<<" "<<endl;   
    return 0;  
} 
