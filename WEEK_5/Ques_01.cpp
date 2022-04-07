#include <iostream>
#include <time.h>
#include <limits.h>

using namespace std;

void display(char ar[],int n){
    for(int i= 0;i<n;i++){
        cout<<ar[i]<<" ";
    }
    cout<<endl;
}
    


int main(){
    int oc[256] = {0};
    int n = 10,moc=INT_MIN;
    cout<<"enter n"<<endl;
    cin>>n;
    char *ar = new char[n];
    srand(time(NULL));
    for(int i= 0;i<n;i++){
        ar[i] = 'a' + rand()%('z'-'a');
    }
    // display(ar,n);

    for(int i= 0;i<n;i++){
        oc[ar[i]]++;
    }
    for(int i = 0;i<256;i++){
        moc = (oc[i]>oc[moc])?i:moc;
    }
    cout<<"Max occurance is of "<<char(moc)<<endl;

    // display_histogram(oc,26,oc[moc]);
    delete(ar);
    return 0;
}