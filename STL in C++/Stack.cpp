#include<iostream>
#include<stack>

using namespace std;

int main()
{

  stack<string> s;

    // For push/add element in an list

    s.push("om");
    s.push("gaurav");
    s.push("vrushali");

    
     cout<<"Top Element : "<<s.top()<<endl;
     s.pop();
     cout<<"Top Element : "<<s.top()<<endl; 


    cout<<"size of stack : " <<s.size()<<endl;

    cout<<"Empty or not : " << s.empty() <<endl;


}