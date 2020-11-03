int fun(int i){
    if(i>0){
        fun(i--);
    }
    else
    {
        return 0;
    }
    
}

int main(){
    fun(5);
}