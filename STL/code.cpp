// set in cpp

#include<iostream>
#include<set>

using namespace std;

int main() {
    set<int> s;

    s.insert(0);
    s.insert(1);
    s.insert(1);

    for (int i:s){
        cout<<i<<" ";
    }

    // remove the first element
    s.erase(s.begin());

    // for count a particular element
    cout<<s.count(1);

    return 0;
}