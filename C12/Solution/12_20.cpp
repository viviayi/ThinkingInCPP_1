class Test{
public:
    int i;
    friend Test& operator=(const Test&); //error: 'Test& operator=(const Test&)' must be a nonstatic member function
};

Test& operator=(Test& left, const Test& right){
    if(&left != &right){
        left.i = right.i;
    }
}

int main(){
    Test t1;
    Test t2;
    t1 = t2;
}