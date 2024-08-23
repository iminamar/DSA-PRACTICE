#include <iostream>
using namespace std;

template <typename T> 
T solve(T myVariable){
    return myVariable+1;
}
int main() {
    cout<<solve(1)<<endl;
    cout<<solve(2.5)<<endl;
    cout<<solve('a')<<endl;
    return 0;
}

/*
The templates are one of the most powerful and widely used methods added to C++, allowing us to write generic programs. It allow us to define generic functions and classes. It promote generic programming, meaning the programmer does not need to write the same function or method for different parameters.
*/