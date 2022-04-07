#include <iostream>
#include <algorithm>
#include <time.h>
using namespace std;
//selection  sort
void display(int ar[],int n){
    for(int i= 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
void swap(int *i,int *j){
    int a= *i;
    *i=*j;
    *j=a;
}
    int selection_sort(int *start,int *end){
        int c = 0;
        // bool ntswst=1;
        for(int *i = start;i<end;i++){
            // ntswst=1;
            int *si = i;
            for(int *j=i+1;j<end;j++){
                if(*j<*si){
                    // ntswst=0;
                    si=j;
                }
                c++;
            }
            swap(si,i);
        }
        return c;
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
    int c = selection_sort(ar,ar+n);
    cout<<"No. of comparisions = "<<c<<endl;
    display(ar,n);
    return 0;
}