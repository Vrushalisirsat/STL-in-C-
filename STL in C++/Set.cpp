#include<iostream>
#include<set>


using namespace std;

int main()
{
    set<int> s;

    s.insert(7);
    s.insert(2);
    s.insert(4);
    s.insert(9);
    s.insert(1);
    s.insert(3);

    for(auto i:s) {
        cout<<i <<endl;
    }
    cout<<"\n";
    s.erase(s.begin());

     for(auto i:s) {
        cout<<i<<endl;
    }
    cout<<endl;



    cout<< "9 is present or not? : "<<s.count(9)<<endl;

    set<int>:: iterator itr = s.find(4);

    for(auto it=itr;it!=s.end();it++) {
        cout<<*it<<" ";
    }
    cout<<endl;


}