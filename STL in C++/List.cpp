#include<iostream>
#include<list>

using namespace std;

int main()
{

  list<int> l;

    // For push/add element in an list

    l.push_back(3);
    l.push_back(5);
    l.push_back(8);
    cout<<"Element present in an list is : ";
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;

    // cout<<"Element at 2nd Index -->" << l.at(1)<< endl;         // To get index of list

    cout<<"First Element --> " << l.front()<<endl;              // to get first element of an list

    cout<<"Last Element --> " <<l.back()<<endl;               // to get last element of an list


     cout<<"Array is Empty or not : " << l.empty()<<endl;         // check list is empty or not





   // for pop/delete element in an list
    l.pop_front();
    cout<<"Element After delete : ";
    for(int i:l) {
        cout<<i<<" ";
    }
    cout<<endl;




}