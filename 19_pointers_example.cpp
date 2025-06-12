#include <iostream>
using namespace std;

// Função que modifica o valor usando ponteiro como parâmetro
void alterarValor(int* n) {
    *n = 100; // Acessa o valor no endereço apontado por n e altera para 100
}

// Função que copia valor por retorno (sem ponteiros ou referências)
int copiarValor(int origem) {
    return origem; // Retorna uma cópia do valor recebido
}

// Função que copia valor usando ponteiros
void copiarValorPtr(int* origem, int* destino) {
    *destino = *origem; // Copia o valor do endereço origem para o endereço destino
}

int main() {
    // 1. Variável normal do tipo int
    int n = 10; 
    cout << "Valor inicial de n: " << n << endl; // Imprime 10

    // 2. Declaração de ponteiro (ainda não inicializado)
    int* ptr; 
    // *ptr = 20;  // Cuidado! Isso causaria erro porque ptr não aponta para endereço válido

    // 3. Uso correto do ponteiro
    int x = 5;      // Variável normal
    ptr = &x;       // ptr recebe o endereço de x
    cout << "Valor de x antes da alteração via ponteiro: " << x << endl; // 5

    *ptr = 20;      // Modifica o valor de x através do ponteiro
    cout << "Valor de x depois da alteração via ponteiro: " << x << endl; // 20

    // 4. Usando ponteiro em função para alterar variável
    alterarValor(ptr);  // Passa endereço de x para função
    cout << "Valor de x após a função alterarValor: " << x << endl; // 100

    // 5. Copiando valor usando retorno de função (sem ponteiros)
    int a = 10;
    int b = 0;
    b = copiarValor(a);
    cout << "Valor de b após copiarValor (cópia por retorno): " << b << endl; // 10

    // 6. Copiando valor usando ponteiros
    int m = 30;
    int n2 = 0;
    copiarValorPtr(&m, &n2); // Passa endereço de m e n2 para copiar valor
    cout << "Valor de n2 após copiarValorPtr (cópia por ponteiro): " << n2 << endl; // 30

    return 0;
}
