#include<iostream>
#include<queue>

using namespace std;

int main()
{
  
  //max heap
  priority_queue<int> max;

 //min heap
 priority_queue<int , vector<int> , greater<int> > min;






    // For push/add element in an queue    for max

    max.push(5);
     max.push(8);
    max.push(2);
     max.push(6);
    cout<<"Element present in an queue : ";
    int n=max.size();
    for(int i=0; i<n; i++) {
        cout<<i<<" ";
    }
    cout<<endl;



    // For push/add element in an queue       for min

    min.push(5);
     min.push(8);
    min.push(2);
     min.push(6);
    cout<<"Element present in an queue : ";
     n=min.size();
    for(int i=0; i<n; i++) {
        cout<<i<<" ";
    }
    cout<<endl;

    

}