// 1.
// Given a sorted array of positive integers containing few dublicate elements. 
// Design an algo and implement it using a program to find weather the given key is present in the array or not, 
// if it is present find total no. of copies of the given key.

#include <iostream>
#include<algorithm>
#include<vector>

using namespace std;

int binary_search_lb(int ar[],int l, int h, int e){
    // if(l>h)
    // return h;

    // int m = l + (h-l)/2;

    // if(e<=ar[m])
    //     return binary_search_lb(ar,l,m,e);
    // else if(e>ar[m])
    //     return binary_search_lb(ar,m+1,h,e);

    int m;

    while(l<h){
        m = l + (h-l)/2;
        if(ar[m]<e){
            l = m+1;
        }else{
            h = m;
        }
    }

    while(ar[l]<e)
    l++;
    if(ar[l]==e)
        return l;
    else
        return -1;
}

/////////////...............incomplete.............................................//

int main(){
    int n = 10;
    int x,i,j;
    cin>>n;
    int *ar = new int[n];
    for(i = 0; i<n;i++){
        cin>>ar[i];
    }
    sort(ar,ar+n);
    for(i = 0; i<n;i++){
        cout<<ar[i]<<' ';
    }
    cout<<"Enter key.";
    cin>>x;
    i = binary_search_lb(ar,0,n,x);

    if(i==-1)
        cout<<"Element does not exists.\n";
    else
    {
        j=i;
        while(j<n && ar[j]==ar[i])j++;
        cout<<"Element exist from range "<<i<<" to "<<j-1<<endl;
    }

    return 0;
}


// 2.
// Given a sorted array of positive int.
// Design an algo and implement it using a prog to find 3 indexes i,j and k such that:
//  arr[i] + arr[j] = arr[k]

// vector <vector <int> > find_indices(int ar[], int n){
//     vector <vector <int> > r;
//     vector <int> t;

//     return r;
// }

// int main(){
//     int n = 10;
//     int x,i;
//     cin>>n;
//     int *ar = new int[n];
//     for(i = 0; i<n;i++){
//         cin>>ar[i];
//     }
//     sort(ar,ar+n);
//     for(i = 0; i<n;i++){
//         cout<<ar[i]<<' ';
//     }
//     cout<<"Enter key.";
//     cin>>x;
//     vector <vector <int> > ind;
//     ind = find_indices(ar,n);
//     return 0;
// }

// 3.
// Given an array of non-negative integers.
// Design an algo and implement it using an prog to 
// count the no. of pairs of integers such that their differences is equal to tha given key.


// int count_pairs(int ar[],int n, int k){

    
// }
// int main(){
//     int n=10,x;
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
//     int allprs = count_pairs(ar,n,x);
//         cout<<"no. of pairs = " << allprs << endl;

//     return 0;
// }