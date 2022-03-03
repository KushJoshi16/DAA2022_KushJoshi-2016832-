
// Given an array of non negative integers design an linear algorithm 
// and implement it using a program to find weather the given key element is present in the array or not. 
// Also find out the total no. of comparisions. take any no. of input test cases.

#include <iostream>

using namespace std;

int main(){
    int n = 10;
    int x;
    cin>>n;
    int ar[] = new int[n];
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
    cout<<"Enter key.";
    cin>>x;
    // for(int i = 0;i<n;i++){

    // }
    int i = 0;
    while (i<n)
    {
        if(ar[i]==x)
        break;
        i++;
    }
    i = (i==n)?-1:i;
    cout<<"the index is "<<i;
    
    return 0;
}

// Given an already sorted array of the positive integers design an algo and implment it to find weather the given key element is persent in the array or not.
// also find out total no. of comparisions.
