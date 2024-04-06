int fatorial (int n){
    if(n == 0) //critério de parada
        return 1;
    else //parâmetro do fatorial sempre muda
        return n*fatorial(n – 1);
}