#include<iostream>
#include<cmath>

using namespace std;

int main(){
    int input;
    float jarak;
    float vtan;
    scanf("%d", &input);
    if(input>0 && input<11){
        input=input-1;
    }
    else if(input>10 && input<21){
        input=input-3;
    }
    else if(input>20 && input<31){
        input=input-5;
    }
    jarak=(input*input*1.0)/10;
    int jarak2 = jarak;
    vtan=sqrt(jarak2*10);
    if(input>0 && input <11){
        vtan=vtan+1;
    }
    else if(input>10 && input<21){
        vtan=vtan+3;
    }
    else if(input>20 && input<31){
        vtan=vtan+5;
    }
    printf("%d %4f", jarak2, vtan);
}

