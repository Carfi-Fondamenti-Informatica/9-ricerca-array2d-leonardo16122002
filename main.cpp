#include <iostream>
#include "lib.h"

using namespace std;
int main() {
    char a[10][20];
    char n[20];
    int r;
    for(int k=0;k<10;k++){
        cin>>a[k];
    }
    cin>>n;

    r=cerca(a,n);
    if(r==-1){
        cout<<"non presente"<<endl;
    }else{
        cout<<r<<endl;
    }
    /*for(int k=0;k<10;k++){
        cout<<a[k]<<endl;
    }*/

    return 0;
}
