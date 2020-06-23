class Test
{
public:
    //Test(int i = 0, int j = 0, int k = 0);
    Test(int i = 0, int = 0, int k = 0);
    ~Test();
};

Test::Test(int i, int, int k)
//Test::Test(int i, int j, int k)
{
}

Test::~Test()
{
}

int main(){
    Test t(1,1,1);
}