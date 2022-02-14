#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{

vector<int> v;

v.push_back(3);
v.push_back(8);
v.push_back(1);
v.push_back(6);
v.push_back(7);

cout<< "finding 8 : "<< binary_search(v.begin() , v.end() , 8) << endl;

cout<< "lower bound : "<< lower_bound(v.begin() , v.end() , 8) -v.begin()<< endl;

cout<< "upper bound : "<< upper_bound(v.begin() , v.end() , 8) -v.begin()<< endl;



// find max and min value

int a=10;
int b=17;

cout<<"max : " << max(a,b) <<endl;
cout<<"min : " <<min(a,b)<<endl;

swap(a,b);
cout<<"a="<<a<<endl<<"b="<<b<<endl;


// reverse a string

string abcd = "abcd";
reverse(abcd.begin() , abcd.end());

cout<<"string : "<<abcd<<endl;

rotate(v.begin() , v.begin()+1 , v.end());
cout<<"After Rotate" <<endl;
for(int i:v) {
    cout<<i<<" ";
}




}