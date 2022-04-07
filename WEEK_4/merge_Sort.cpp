#include <iostream>
#include <time.h>
using namespace std;
//merge sort
void display(int ar[],int n){
    for(int i= 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}

void merge_ar(int *start,int *mid,int *end){
    int *start1 = start;
    int *start2 = mid+1;
    int n = end-start+1,i=0;
    int *temp = new int[n];
    while(start1<=mid && start2<=end){
        if(*start1 <= *start2){
            temp[i] = *start1;
            i++;
            start1++;
        }
        else{
            temp[i] = *start2;
            i++;
            start2++;
        }
    }
    while(start1<=mid){
            temp[i] = *start1;
            i++;
            start1++;
    }
    while(start2<=end){
            temp[i] = *start2;
            i++;
            start2++;
    }

    i=0;

    while(start<=end){
        *start = temp[i];
        start++;
        i++;
    }
    delete(temp);
}

void merge_sort(int *start,int *end){
    if(start >= end)
    return;
    int *mid = start + (end - start)/2;
    merge_sort(start,mid);
    merge_sort(mid+1,end);
    merge_ar(start,mid,end);
    return;
}
int main(){
    int n = 10;
    cout<<"enter n"<<endl;
    cin>>n;
    int *ar = new int[n];
    srand(time(NULL));
    for(int i= 0;i<n;i++){
        ar[i] = rand()%100;
    }
    display(ar,n);
    merge_sort(ar,ar+n);
    display(ar,n);
    return 0;
}