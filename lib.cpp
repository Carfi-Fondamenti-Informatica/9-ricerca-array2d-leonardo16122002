//
// Created by leona on 07/12/2021.
//

#include "lib.h"

int cerca(char a[10][20], char n[20]){

    for(int i=0;i<10;i++){
        for(int j=0;j<20;j++){
            if(a[i][j]!=n[j]&&a[i][j]!=n[j]-32&&a[i][j]!=n[j]+32){
                break;
            }
            if(a[i][j]==n[j]||a[i][j]==n[j]-32||a[i][j]==n[j]+32&&n[j]=='\0'){
                return i;
            }
        }
    }
    return -1;
}
