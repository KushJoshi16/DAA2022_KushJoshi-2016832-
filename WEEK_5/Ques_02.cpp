#include <iostream>
#include <time.h>
#include <limits.h>
#include <algorithm>
using namespace std;

void display(int ar[],int n){
    for(int i= 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
    
bool solve(int ar[],int h,int k)
{
    sort(ar,ar+h);
    int l = 0;
    while(l<h){
        if(ar[l]+ar[h]<k)
        l++;
        else if(ar[l]+ar[h]>k)
        h--;
        else
        return true;
    }
    return false;
}
int main(){
    int oc[256] = {0};
    int n = 18;
    int k;
    cout<<"enter key"<<endl;
    cin>>k;
    int *ar = new int[n];

    srand(time(NULL));

    for(int i= 0;i<n;i++){
        ar[i] = rand()%100;
    }

    display(ar,n);
    if(solve(ar,n,k))
    cout<<"elements exists"<<endl;
    else
    cout<<"elements do not exists"<<endl;

    delete(ar);
    return 0;
}