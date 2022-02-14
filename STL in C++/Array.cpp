// STL Array

#include<iostream>
#include<array>


using namespace std;

int main()
{

    // int a[]={1,2,3,4};                 // Normal array declaration
    array<int , 4> a = {1,2,3,4};           // declare array in stl

    // To get size of array
    int size = a.size();           


    for(int i=0; i<size; i++) {
    cout<<a[i]<<endl;
    }

    cout<<"Element at 2nd Index -->" << a.at(2)<< endl;         // To get index of array

    cout<<"Array is Empty or not : " << a.empty()<<endl;         // check array is empty or not

    cout<<"First Element --> " << a.front()<<endl;              // to get first element of an array

    cout<<"Last Element --> " << a.back()<<endl;               // to get last element of an array

    
     
}