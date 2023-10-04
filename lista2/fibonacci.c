long int fibonacci(int n) {
    static long int fibMemo[80] = {0}; // Inicialize com zeros para memorização
    if (n == 1 || n == 2) return 1;
    if (fibMemo[n] != 0) return fibMemo[n]; // Verifica se o valor já foi calculado
    fibMemo[n] = fibonacci(n - 1) + fibonacci(n - 2);
    return fibMemo[n];
}