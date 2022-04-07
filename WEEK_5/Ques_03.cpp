#include <iostream>
#include <time.h>
#include <limits.h>
#include <algorithm>
#include <vector>

using namespace std;

void display(int ar[],int n){
    for(int i= 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void display(vector<int> ar){
    if(ar.empty()){
        cout<<"Vector Empty"<<endl;
        return;
    }
    for(int i : ar){
        cout<<i<<" ";
    }
    cout<<endl;
}

vector<int> solve(int ar1[],int ar2[],int m,int n){
    vector<int> rv;
    int i = 0,j=0;
    while(i<m && j<n){
        if(ar1[i]<ar2[j])
            i++;
        else if(ar1[i]>ar2[j])
            j++;
        else {
            rv.push_back(ar1[i]);
            i++;
            j++;
        }
    }
    return rv;
}


int main(){
    int oc[256] = {0};
    int m = 20,n = 10;
    cout<<"enter m and n"<<endl;
    cin>>m>>n;
    int *ar1 = new int[m];
    int *ar2 = new int[n];


    srand(time(NULL));

    for(int i= 0;i<m;i++){
        ar1[i] = rand()%100;
    }
    for(int i= 0;i<n;i++){
        ar2[i] = rand()%100;
    }
    sort(ar1,ar1+m);
    sort(ar2,ar2+n);

    vector<int> rl(m,0);

    display(ar1,m);
    display(ar2,n);
    
    rl = solve(ar1,ar2,m,n);

    display(rl);

    delete(ar1);
    delete(ar2);
    return 0;
}