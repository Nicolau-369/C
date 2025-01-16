int factorial (int n){
    if(n == 0) //stopping criterion
        return 1;
    else //factorial parameter always changes
        return n*factorial(n – 1);
}
