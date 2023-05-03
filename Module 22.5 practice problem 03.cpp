#include<bits/stdc++.h>
using namespace std;
void display(list<int>&lst)
{
    auto it=lst.begin();
    while(it!=lst.end())
    {
        cout<<*it<<" ";
        it++;
    }
    cout<<endl;
}
int main()
{
    list<int>list1;


    list1.push_back(0);
    list1.push_back(2);
    list1.push_back(0);
    list1.push_back(0);
    list1.push_back(5);
    display(list1);
     //Removing Element from the list
    list1.remove(0);
    display(list1);











}

