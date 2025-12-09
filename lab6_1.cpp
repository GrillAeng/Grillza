#include<iostream>
using namespace std;

int main(){
    int n=1,en=0,on=0;
    cout << "Enter an integer: ";
    cin >> n;
    if(n%2==0){
        if(n!=0){
            en++;
        }
        }
        else{
            on++;
        }
    while(n!=0){
        cout << "Enter an integer: ";
        cin >> n;
        if(n%2==0){
            if(n!=0){
            en++;
        }
        }
        else{
            on++;
        }
    }
    cout << "#Even numbers = " << en << "\n";
    cout << "#Odd numbers = " << on;
    return 0;
}
