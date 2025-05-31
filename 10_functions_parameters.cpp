// Nome do arquivo: FuncoesParametros.cpp
//
// Este script demonstra duas funções em C++:
// 1. somar(int a, int b): recebe dois inteiros e retorna a soma.
// 2. encontrarMaior(int valores[], int tamanho): recebe um vetor de inteiros e seu tamanho, percorre o vetor e retorna o maior valor.
// No main(), o programa chama cada função e exibe o resultado na tela.
//
// Para compilar:
//   g++ FuncoesParametros.cpp -o FuncoesParametros
// Para executar:
//   ./FuncoesParametros

#include <iostream>

// Função que recebe dois inteiros como parâmetros e retorna a soma
int somar(int a, int b) {
    return a + b;
}

// Função que recebe um vetor de inteiros e seu tamanho, retorna o maior valor
int encontrarMaior(int valores[], int tamanho) {
    if (tamanho <= 0) return 0; // caso de segurança

    int maior = valores[0];
    for (int i = 1; i < tamanho; i++) {
        if (valores[i] > maior) {
            maior = valores[i];
        }
    }
    return maior;
}

int main() {
    // Exemplo 1: Soma de dois números
    int x = 7, y = 5;
    int resultadoSoma = somar(x, y);
    std::cout << "Soma de " << x << " e " << y << " = " << resultadoSoma << std::endl;

    // Exemplo 2: Encontrar maior em um vetor
    int vetor[] = { 3, 8, 2, 12, 6 };
    int tamanhoVetor = 5;
    int maiorValor = encontrarMaior(vetor, tamanhoVetor);
    std::cout << "Maior valor no vetor = " << maiorValor << std::endl;

    return 0;
}
