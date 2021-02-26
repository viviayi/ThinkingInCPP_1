/**
Using the Standard C++ Library vector as an underlying
implementation, create a Set template class that accepts
only one of each type of object that you put into it. Make
a nested iterator class that supports the "end sentinel"
concept in this chapter. Write test code for your Set in
main( ), and then substitute the Standard C++ Library set
template to verify that the behavior is correct.
**/
#include <vector>
#include <set>
#include "../../require.h"
#include <iostream>
using namespace std;

template<class T>
class Set{
    vector<T> data;
    bool exists(const T& element);
public:
    Set() : data() {}
    size_t size() const{ return data.size(); }
    class iterator;
    friend class iterator;
    class iterator{
        Set& s;
        int index;
    public:
        iterator(Set& is) : s(is), index(0) {}
        iterator(Set& is, bool) : s(is), index(is.size()) {}
        T operator++(){ // Prefix
            require(index < s.size(), "iterator moved out of range");
            return s.data[++index];
        }
        T operator++(int){ // Postfix
            require(index < s.size(), "iterator moved out of range");
            return s.data[index++];
        }
        T operator*() const { return s.data[index]; }
        friend ostream& operator<<(ostream& os, const iterator& it){
            return os << *it;
        }
        // To see if you're at the end:
        bool operator==(const iterator& rv) const{
            return index == rv.index;
        }
        bool operator!=(const iterator& rv) const{
            return index != rv.index;
        }
    };
    iterator begin(){
        return iterator(*this);
    }
    iterator end(){
        return iterator(*this, true);
    }
    bool insert(const T& element);
};

template<class T>
bool Set<T>::exists(const T& element){
    for(int i = 0; i < size(); i++){
        if(element == data[i])
            return true;
    }
    return false;
}

template<class T>
bool Set<T>::insert(const T& element){
    if (exists(element))
        return false;
    else
        data.push_back(element);
    return true;
}

int main(){
    Set<int> a;

    a.insert(3);
    a.insert(4);
    a.insert(5);
    a.insert(4);
    Set<int>::iterator it = a.begin();
    while(it != a.end())
        cout << it++ << endl;
    
    set<int> b;
    b.insert(3);
    b.insert(4);
    b.insert(5);
    for (set<int>::iterator it=b.begin(); it!=b.end(); ++it)
        cout << *it << endl;

}
