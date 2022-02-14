#include<iostream>
#include<vector>

using namespace std;

int main()
{
    vector<int> v;                                    // declaration of vector in STL

    vector<int> a(5,1);
    vector<int> last(a);

    cout<<"print last" <<endl;
    for(int i:last) {
        cout<<i<<" ";
    } cout<<endl;


    cout<<"*****************************************************************************"<<endl;


    cout<<"Capacity-->" << v.capacity() << endl;            // To get the capacity of vector

    v.push_back(3);                                      // yo add element in vector
    cout<<"Capacity-->" << v.capacity() << endl;            

    v.push_back(5);
    cout<<"Capacity-->" << v.capacity() << endl;

    cout<<"Size-->" << v.size() << endl;                         // to get size of element

    cout<<"Element at 2nd Index -->" << v.at(1)<< endl;         // To get index of vector

    cout<<"First Element --> " << v.front()<<endl;              // to get first element of an vector

    cout<<"Last Element --> " <<v.back()<<endl;               // to get last element of an vector


   // pop/delete operation on vector element

   cout<<"Element Before pop element : " << endl;
   for(int i:v) {
       cout<<i<<" ";
   }
   cout<<endl;

   v.pop_back();                                // to delete element in vector

   cout<<"Elemenet After pop : "<<endl;
    for(int i:v) {
        cout<<i<<" " ;
    }
    cout<<endl;
   
       
    // clear the element in vector

    cout<< "Before clear size : " << v.size()<<endl;

    v.clear();

    cout<< "After clear size : " << v.size()<<endl;
}