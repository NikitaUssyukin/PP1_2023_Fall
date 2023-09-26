#include<iostream>
using namespace std;

int main(){

    int a;
    int max;
    cin >> a;
 
    int array[a];
    

    // for (int i = 0; i < a; i++) {
    //     cout << array[i] << " ";
    // }
 

    // cout << endl;

    for (int i = 0; i < a; i++){
    
        cin >> array[i];
        
    }

    max = array[0];

    for ( int i = 1; i < a; i++){

        if(array[i] > max) max = a;
    } 

    cout << max << endl;

    return 0;
}