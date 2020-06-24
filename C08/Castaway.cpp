// "Casting away" constness
class Y{
    int i;
public:
    Y();
    void f() const;
};

Y::Y() { i = 0; }

void Y::f() const{
    //! i++;
    ((Y*)this)->i++; // cast away const-ness
    //Better: use c++ explicit cast syntax:
    (const_cast<Y*>(this))->i++;
}

int main(){
    const Y yy;
    yy.f();
} ///:~