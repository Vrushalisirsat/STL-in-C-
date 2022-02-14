#include<iostream>
#include<deque>

using namespace std;

int main() {

    deque<int> d;
    
    // For push/add element in an list
    d.push_back(6);
    d.push_back(3);
    d.push_back(9);
    cout<<"Element present in an list : ";
    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;

    
    cout<<"Element at 2nd Index -->" << d.at(1)<< endl;         // To get index of deque

    cout<<"First Element --> " << d.front()<<endl;              // to get first element of an deque

    cout<<"Last Element --> " <<d.back()<<endl;               // to get last element of an deque


     cout<<"Array is Empty or not : " << d.empty()<<endl;         // check deque is empty or not





   // for pop/delete element in an deque
    d.pop_front();
    cout<<"Element After delete : ";
    for(int i:d) {
        cout<<i<<" ";
    }
    cout<<endl;


// clear the element in deque
 /*
    cout<< "Before clear size : " << d.size()<<endl;

    d.clear();

    cout<< "After clear size : " << d.size()<<endl;
*/
// OR another method



    cout<< "Before erase size : " <<d.size()<<endl;

   // d.erase(d.begin() , d.begin()+1);                        // to erase the element in deque
    d.clear();                                                 // to clear the element in deque
    cout<< "After erase size : " << d.size()<<endl;



}