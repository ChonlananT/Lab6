#include<iostream>
using namespace std;

int main(){
    int i , x=0, y=0;
    while ( i != 0){
        cout << "Enter an integer: "; 
        cin >> i;
        if(i == 0){
            break;
        }else if (i%2 == 0){
            x += 1;
        }else {
            y += 1;
        }


        
    }
    
    cout << "#Even numbers = " << x << "\n";
    cout << "#Odd numbers = " << y << "\n";
    
    return 0;
}
