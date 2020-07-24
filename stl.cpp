//programmer : Anand
//Using standard template library 

#include<iostream>
#include<vector> // using vector container
using namespace std;


void display(vector<int> &v)
{
    cout<<"\n";
    for(int i=0;i<v.size();i++)
    cout<<v[i]<<" ";
}

int main()
{
    int x;
    vector<int> v;
    cout<<"The size of the vector is "<<v.size();
    cout<<"\nEnter five more elements ";
    for(int i=0;i<5;i++)
    {
        cin>>x;
        v.push_back(x);
    }
    display(v);
    cout<<"\nThe size of the vector is "<<v.size();

    vector<int>::iterator itr = v.begin(); 

    itr += 5; // at 6th position
    v.insert(itr,99); //insert member function of vector class container

    v.erase(v.begin()); //deleting 1th element
    
    display(v);

    return 0;
}