#include<iostream>
using namespace std;

int v(int arrb[], int k){
    
    int ii,flag = -1;

    for (ii=0;ii<k;ii++){        
        if(arrb[ii]>=0 && arrb[ii]<=100)
            continue;
           else flag++;
                   
    }
   
    if(flag<0)
        return true;
    else return false;
}

int main(){

    int i=9,l=3, arr[]={-9, 1, 2, 3};
    
    bool kk = v(arr,l);

    cout<<kk;
    
}

