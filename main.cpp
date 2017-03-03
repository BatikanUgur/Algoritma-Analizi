#include <iostream>
#include <math.h>
//0(logb) c++
using namespace std;

long pow(int x,int n){
if(n==0) return 1;
if(n==1) return x;
if(n%2==0){
    return pow(x*x,n/2);
}

else{
    return pow(x*x,n/2)*x;
}
}
int main()
{
    long summary=pow(6,20);

    cout << "summary= " << summary<< endl;
    return 0;
}
