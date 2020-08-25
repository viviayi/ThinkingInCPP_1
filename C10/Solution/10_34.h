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