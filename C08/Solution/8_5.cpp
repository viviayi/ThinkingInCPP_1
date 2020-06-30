#include <ctime>
#include <iostream>
using namespace std;

int main(){
    const time_t timer = time(NULL);

    struct tm* timeinfo;
    timeinfo = localtime(&timer);

    cout << asctime(timeinfo) << endl;

    // Takes some cpu time
    for(int i = 0, j = 0; i < 10000000; i++){
        j++;
    }
    //! timer = time(NULL);
    //! timeinfo = localtime(&timer);
    //! cout << asctime(timeinfo) << endl;
}
