// Constant pointer arg/return
void t(int&){}

void u(const int& cip){
    //! *cip = 2; // Illeagal —— modifies value
    int i = cip; // OK —— copies value
    //! int*  ip2 = cip; // Illeagal: non-const
}

const char* v(){
    // Retruns address of static character array:
    return "result of function v()";
}

const int& w(){
    static int i;
    return i;
}

int main(){
    int x = 0;
    int& ip = x;
    const int& cip = x;
    t(ip); // OK
    // ! t(cip); // Not OK
    u(ip);  // OK
    u(cip); // Also OK
    //! char* cp = v();
    const char* ccp = v();
    //! int* ip2 = w();
    //const int& const ccip = w();
    const int& cip2 = w();
    //! *w() = 1;
} ///:~