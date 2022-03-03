
// Given an array of non negative integers design an linear algorithm 
// and implement it using a program to find weather the given key element is present in the array or not. 
// Also find out the total no. of comparisions. take any no. of input test cases.

#include <iostream>
#include<algorithm>
using namespace std;

// int main(){
//     int n = 10;
//     int x;
//     cin>>n;
//     int *ar = new int[n];
//     for(int i = 0; i<n;i++){
//         cin>>ar[i];
//     }
//     cout<<"Enter key.";
//     cin>>x;
//     // for(int i = 0;i<n;i++){

//     // }
//     int i = 0;
//     while (i<n)
//     {
//         if(ar[i]==x)
//         break;
//         i++;
//     }
//     i = (i==n)?-1:i;
//     cout<<"the index is "<<i;
    
//     return 0;
// }

// Given an already sorted array of the positive integers design an algo and implment it to find weather the given key element is persent in the array or not.
// also find out total no. of comparisions.


// int binary_search(int ar[],int l, int h, int e){
//     if(l>h)
//     return -1;
//     int m = l + (h-l)/2;
//     if(e==ar[m])
//         return m;
//     else if(e>ar[m])
//         return binary_search(ar,m+1,h,e);
//     else if(e<ar[m])
//         return binary_search(ar,l,m-1,e);
// }

// int main(){
//     int n = 10;
//     int x;
//     cin>>n;
//     int *ar = new int[n];
//     for(int i = 0; i<n;i++){
//         cin>>ar[i];
//     }
//     sort(ar,ar+n);
//     for(int i = 0; i<n;i++){
//         cout<<ar[i]<<' ';
//     }
//     cout<<"Enter key.";
//     cin>>x;
    
//     int ans = binary_search(ar,0,n-1,x);
//     if(ans != -1)
//         cout<<"Num found";
//     else
//         cout<<"Num not found";

//     return 0;
// }


int binary_search(int ar[],int l, int h, int e){
    int m;
    while(l<=h){
        m = l + (h-l)/2;
        if(ar[m]==e)
            return m;
        else if(ar[m]>e)
            h = m-1;
        else if(ar[m]<e)
            l = m+1;
    }

    return -1;
}
int main(){
    int n = 10;
    int x;
    cin>>n;
    int *ar = new int[n];
    for(int i = 0; i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(int i = 0; i<n;i++){
        cout<<ar[i]<<' ';
    }
    cout<<"Enter key.";
    cin>>x;
    
    int ans = binary_search(ar,0,n-1,x);
    if(ans != -1)
        cout<<"Num found";
    else
        cout<<"Num not found";

    return 0;
}