// Com recursão
int fatorial (int n){
    if(n == 0)
        return 1;
    else
        return n*fatorial(n-1);
}

// Sem recursão
int fatorial (int n){
    if(n == 0)
        return 1;
    else {
        int i, f = 1;
        for (i=2; i <= n;i++)
            f = f * i;
    return f;
    }
}