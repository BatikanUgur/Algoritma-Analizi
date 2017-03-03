#include <iostream>
#include <math.h>
// 0(logb) c++ adým sayýsý
using namespace std;
int static i=0;
long pow(int x,int n){
if(n==0){
    i++;
    return 1;
}
if(n==1){
    i++;
    return x;
}
if(n%2==0){
    i++;
    return pow(x*x,n/2);
}

else{
    i++;
    return pow(x*x,n/2)*x;
}

}


int main()
{
    long sum=pow(6,20);

    cout << "summary= " << sum << endl;
    cout<< "number of steps = "<<i<<endl;
    return 0;
}

