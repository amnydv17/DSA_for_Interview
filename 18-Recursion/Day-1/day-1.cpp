#include<iostream>
using namespace std;

int factorial(int n){
    if(n==0){//base case
        return 1;
    }
return n*factorial(n-1); // recursive call
}


int main(){
    
    int n;
    cin>>n;

    int ans = factorial(n);
    cout<<ans<<endl;

    return 0;
}