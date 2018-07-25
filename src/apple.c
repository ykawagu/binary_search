#include <stdio.h>

int n;
int k;
int A[100000];


int bag(int m){
    int i, a, b;
    a = 0;
    b = 0;
    for(i = 0; i < n; i++){
        if(A[i]%m == 0){
            b = a + A[i]/m;
        }
        else {
            b = a + A[i]/m + 1;
        }
        a = b;
    }
    return a;
}


int p(int m){
    return (int) bag(m) <= k;
}


int main(){
    int i, lb, ub;
    scanf("%d%d", &n, &k);
    for(i = 0; i < n; i++){
        scanf("%d", &A[i]);
    }
    lb = 0;
    ub = 1000000000;
    while(ub-lb > 1){
        int m = (lb+ub)/2;
        if(p(m)){
            ub = m;
        }
        else {
            lb = m;
        }
    }
    
    
    printf("%d\n", ub);
    return 0;
}
