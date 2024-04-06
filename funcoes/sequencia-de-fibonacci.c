// Com recursão
int fibo(int n){
    if(n == 0 || n == 1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}

// Sem recursão
int fibo(int n){
    int i,t,c,a=0, b=1;
    for(i=0;i<n;i++){
        c = a + b;
        a = b;
        b = c;
    }
    return a;
}