// Allowing a struct to refer to itself
typedef struct SelfReferential{
    int i;
    SelfReferential* sr;
} SelfReferential;


typedef struct SelfReferential1{
    int i;
    SelfReferential1* sr;
} SelfReferentialType;

int main(){
    SelfReferentialType sr1, sr2;
    SelfReferential sr3;
    sr1.sr = &sr2;
    sr2.sr = &sr1;
    sr1.i = 47;
    sr2.i = 1024;
    sr3.i = 0;
}