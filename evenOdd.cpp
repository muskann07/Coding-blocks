#include<iostream>
using namespace std;


//EVEN -ODD Program

/*//1 -> Even
//0 -> Odd
bool isEven(int a) {
    //odd
    if(a&1) {
        return 0;
    }
    else {     //Even
        return 1;
    }
}

int main() {

    int num;
    cin>>num;

    if(isEven(num)) {
        cout<<"Number is even"<<endl;
    }
    else{
        cout<<"Number is odd"<<endl;
    }
    return 0;

}*/


//COUNTING Program

/*//function signature
void printCounting(int n) {

     //function body
    for(int i=1; i<=n; i++) {
        cout<<i<<" ";
    }
    cout<<endl;

}

int main() {

    int n;
    cin>>n;

    //function call
    printCounting(n);

    return 0;
}*/


//1 -> Prime no.
// 0 -> Not a Prime no.
bool isPrime(int n) {
    for(int i=2; i<n; i++) {
        //divide hogya h, not a prime no.
        if(n%i==0) {
            return 0;
        }
    }
    return 1;
}

int main() {

    int n;
    cin>>n;

    if(isPrime(n)) {
        cout<<"is a Prime no."<< endl;
    }
    else {
        cout<<"not a Prime no."<<endl;
    }
    return 0;
}

