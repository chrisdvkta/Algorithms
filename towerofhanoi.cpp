#include <iostream>
#include <bits/stdc++.h>
using namespace std; 


void towerOfHanoi(int n, char source, char target, char temp){
    
    if (n==0){
        return;
    }
    towerOfHanoi(n-1,source,temp,target);
    cout<<"Move disk "<<n<<" from rod "<<source<<" to rod "<<target<<endl;
    towerOfHanoi(n-1, temp, target, source);

}


int main() { 
    int n = 3; 

    towerOfHanoi(n,'A', 'C', 'B');
    return 0 ; 
}