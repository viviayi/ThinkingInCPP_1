// Implementation of overloaded oprators
#include "../../require.h"
#include <iostream>
using namespace std;

// Non-member functions:
class Integer{
    long i;
    Integer* This(){ return this; }
public:
    Integer(long ll = 0) : i(ll){}
    // No side effects takes const& argument:
    friend const Integer& operator+(const Integer& a);
    friend const Integer operator-(const Integer& a);
    friend const Integer operator~(const Integer& a);
    friend Integer* operator&(Integer& a);
    friend int operator!(const Integer& a);

    // Side effects have non-const& argument:
    // Prefix:
    friend const Integer& operator++(Integer& a);
    // Postfix:
    friend const Integer operator++(Integer& a, int);
    // Prefix:
    friend const Integer& operator--(Integer& a);
    // Postfix:
    friend const Integer operator--(Integer& a, int);

    // Operators that create new, modified value:
    friend const Integer operator+(const Integer& left, const Integer& right);
    friend const Integer operator-(const Integer& left, const Integer& right);
    friend const Integer operator*(const Integer& left, const Integer& right);
    friend const Integer operator/(const Integer& left, const Integer& right);
    friend const Integer operator%(const Integer& left, const Integer& right);
    friend const Integer operator^(const Integer& left, const Integer& right);
    friend const Integer operator&(const Integer& left, const Integer& right);
    friend const Integer operator|(const Integer& left, const Integer& right);
    friend const Integer operator<<(const Integer& left, const Integer& right);
    friend const Integer operator>>(const Integer& left, const Integer& right);

    // Assignments modify & return lvalue:
    friend Integer& operator+=(Integer& left, const Integer& right);
    friend Integer& operator-=(Integer& left, const Integer& right);
    friend Integer& operator*=(Integer& left, const Integer& right);
    friend Integer& operator/=(Integer& left, const Integer& right);
    friend Integer& operator%=(Integer& left, const Integer& right);
    friend Integer& operator^=(Integer& left, const Integer& right);
    friend Integer& operator&=(Integer& left, const Integer& right);
    friend Integer& operator|=(Integer& left, const Integer& right);
    friend Integer& operator>>=(Integer& left, const Integer& right);
    friend Integer& operator<<=(Integer& left, const Integer& right);

    // conditional oprators return true/false
    friend int operator==(const Integer& left, const Integer& right);
    friend int operator!=(const Integer& left, const Integer& right);
    friend int operator<(const Integer& left, const Integer& right);
    friend int operator>(const Integer& left, const Integer& right);
    friend int operator<=(const Integer& left, const Integer& right);
    friend int operator>=(const Integer& left, const Integer& right);
    friend int operator&&(const Integer& left, const Integer& right);
    friend int operator||(const Integer& left, const Integer& right);

    // Write the contents to an ostream:
    void print(std::ostream& os) const { os << i; }
};

// Global operators:
const Integer& operator+(const Integer& a){
    cout << "+Integer\n";
    return a; // Unary + has no effect
}

const Integer operator-(const Integer& a){
    cout << "-Integer\n";
    return Integer(-a.i); 
}

const Integer operator~(const Integer& a){
    cout << "~Integer\n";
    return Integer(~a.i);
}

int operator!(const Integer& a){
    cout << "!Integer\n";
    return !a.i;
}

Integer* operator&(Integer& a){
    cout << "&Integer\n";
    return a.This(); // &a is recursive!
}

// Prefix; return incremented value
const Integer& operator++(Integer& a){
    cout << "++Integer\n";
    a.i++;
    return a;
}

// Postfix; return the value before increment:
const Integer operator++(Integer& a, int){
    cout << "Integer++\n";
    Integer before(a.i);
    a.i++;
    return before;
}

// Prefix; return decremented value
const Integer& operator--(Integer& a){
    cout << "--Integer\n";
    a.i--;
    return a;
}

// Postfix; return the value before decrement:
const Integer operator--(Integer& a, int){
    cout << "Integer--\n";
    Integer before(a.i);
    a.i--;
    return before;
}

const Integer operator+(const Integer& left, const Integer& right){
    return Integer(left.i + right.i);
}

const Integer operator-(const Integer& left, const Integer& right){
    return Integer(left.i - right.i);
}

const Integer operator*(const Integer& left, const Integer& right){
    return Integer(left.i * right.i);
}

const Integer operator/(const Integer& left, const Integer& right){
    require(right.i != 0, "divide by zero");
    return Integer(left.i / right.i);
}

const Integer operator%(const Integer& left, const Integer& right){
    require(right.i != 0, "modulo by zero");
    return Integer(left.i % right.i);
}

const Integer operator^(const Integer& left, const Integer& right){
    return Integer(left.i ^ right.i);
}

const Integer operator&(const Integer& left, const Integer& right){
    return Integer(left.i & right.i);
}

const Integer operator|(const Integer& left, const Integer& right){
    return Integer(left.i | right.i);
}

const Integer operator<<(const Integer& left, const Integer& right){
    return Integer(left.i << right.i);
}

const Integer operator>>(const Integer& left, const Integer& right){
    return Integer(left.i >> right.i);
}

// Assignments modify & return l value:
Integer& operator+=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i += right.i;
    return left;
}

Integer& operator-=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i -= right.i;
    return left;
}

Integer& operator*=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i *= right.i;
    return left;
}

Integer& operator/=(Integer& left, const Integer& right){
    require(right.i != 0, "divide by zero");
    if(&left == &right) {/* self-assignment */}
    left.i /= right.i;
    return left;
}

Integer& operator%=(Integer& left, const Integer& right){
    require(right.i != 0, "divide by zero");
    if(&left == &right) {/* self-assignment */}
    left.i %= right.i;
    return left;
}

Integer& operator^=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i ^= right.i;
    return left;
}

Integer& operator&=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i &= right.i;
    return left;
}

Integer& operator|=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i |= right.i;
    return left;
}

Integer& operator>>=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i >>= right.i;
    return left;
}

Integer& operator<<=(Integer& left, const Integer& right){
    if(&left == &right) {/* self-assignment */}
    left.i <<= right.i;
    return left;
}

// Conditional operators return ture/false:
int operator==(const Integer& left, const Integer& right){
    return left.i == right.i;
}

int operator!=(const Integer& left, const Integer& right){
    return left.i != right.i;
}

int operator<(const Integer& left, const Integer& right){
    return left.i < right.i;
}

int operator>(const Integer& left, const Integer& right){
    return left.i > right.i;
}

int operator<=(const Integer& left, const Integer& right){
    return left.i < right.i;
}

int operator>=(const Integer& left, const Integer& right){
    return left.i > right.i;
}

int operator&&(const Integer& left, const Integer& right){
    return left.i && right.i;
}

int operator||(const Integer& left, const Integer& right){
    return left.i || right.i;
}

// Show that the overloaded operators work:
void f(Integer a){
    +a;
    -a;
    ~a;
    Integer* ip = &a;
    !a;
    ++a;
    a++;
    --a;
    a--;
}

void h(Integer& c1, Integer& c2){
    // A complex expression:
    c1 += c1 * c2 + c2 % c1;
    #define TRY(OP) \
        cout << "c1 = "; c1.print(cout); \
        cout << ", c2 = "; c2.print(cout); \
        cout << "; c1 " #OP " c2 produces "; \
        (c1 OP c2).print(cout); \
        cout << endl;
    TRY(+) TRY(-) TRY(*) TRY(/)
    TRY(%) TRY(^) TRY(&) TRY(|)
    TRY(<<) TRY(>>) TRY(+=) TRY(-=)
    TRY(*=) TRY(/=) TRY(%=) TRY(^=)
    TRY(&=) TRY(|=) TRY(>>=) TRY(<<=)
    // conditionals:
    #define TRYC(OP) \ 
        cout << "c1 = "; c1.print(cout); \
        cout << ", c2 = "; c2.print(cout); \
        cout << "; c1 " #OP " c2 produces "; \
        cout << (c1 OP c2); \
        cout << endl;
    TRYC(<) TRYC(>) TRYC(==) TRYC(!=) TRYC(<=)
    TRYC(>=) TRYC(&&) TRYC(||)   
}

int main(){
    Integer a(47), b(11);
    f(a);
    h(a, b);
}
///:~