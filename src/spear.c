#include <stdio.h>

int n;
int k;
int A[100000];


int num(int m){
    int i, a, b;
    a = 0;
    b = 0;
    for(i = 0; i < n; i++){
        b = a +A[i]/m;
        a = b;
    }
    return a;
}

int maxl(){
    int i, a;
    a = A[0];
    for(i = 0; i < n; i++){
        if(a <= A[i]){
            a = A[i];
        }
        else{
        }
    }
    return a;
}



int p(int m){
    return (int) num(m) >= k;
}


int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb = 0;
    ub = maxl();
    while(ub-lb > 1){
        int m = (lb+ub)/2;
        if(p(m)){
            lb = m;
        }
        else {
            ub = m;
        }
    }
    
    
    printf("%d\n", lb);
    return 0;
}
