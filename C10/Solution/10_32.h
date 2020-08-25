/*
In a header file, create a class Mirror that contains two data members:
a pointer to a Mirror object and a bool. Give it two constructors:
the default constructor initializes the bool to true and the Mirror
pointer to zero. The second constructor takes as an argument a pointer
to a Mirror object, which it assigns to the object’s internal pointer;
it sets the bool to false. Add a member function test( ): if the object’s
pointer is nonzero, it returns the value of test( ) called through the
pointer. If the pointer is zero, it returns the bool.
*/
#ifndef MIRROR_H_INCLUDED
#define MIRROR_H_INCLUDED

class Mirror{
    Mirror* pt;
    bool flag;
public:
    Mirror(){ 
        flag = true; 
        pt = nullptr;
    }
    Mirror(Mirror* _pt){
        pt = _pt;
        flag = false;
    }
    bool test(){
        if(pt){
            return pt->test();
        }
        else{
            return flag;
        }
    }
};

#endif // MIRROR_H_INCLUDED