#include<iostream>
#include<queue>

using namespace std;

int main()
{

  queue<string> q;

    // For push/add element in an list

    q.push("om");
    q.push("gaurav");
    q.push("vrushali");

    
     cout<<"first Element : "<<q.front()<<endl;
     q.pop();
     cout<<"last Element : "<<q.back()<<endl; 


    cout<<"size of stack : " <<q.size()<<endl;

    cout<<"Empty or not : " << q.empty() <<endl;


}