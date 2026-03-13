# ex02 — PmergeMe

Descrição
- Implementa o algoritmo Merge-Insertion para ordenar inteiros, comparando desempenho entre `std::deque` e `std::vector`.
- Recebe como argumentos uma sequência de inteiros positivos (sem duplicatas).
- Mostra a lista antes/depois e o tempo gasto em milissegundos para cada contêiner.

Principais ficheiros
- PmergeMe.hpp / PmergeMe.cpp — implementação do algoritmo e parsing de argumentos.
- main.cpp — valida argumentos mínimos e invoca `PmergeMe::run`.
- Makefile — compila o binário `PmergeMe`.

Compilar
```bash
cd ex02
make
```

Uso
```bash
./PmergeMe 3 5 9 7 4
```
- O programa valida que cada argumento é número inteiro não-negativo e que não existem duplicatas.
- Em caso de erro imprime mensagem apropriada e retorna código != 0.

Exemplo
```bash
./PmergeMe 3 5 9 7 4
# saída:
# Before: 3 5 9 7 4
# After: 3 4 5 7 9
# Time to process a range of 5 elements with std::deque : X ms
# Time to process a range of 5 elements with std::vector: Y ms
```

Notas
- O layout e mensagens seguem o estilo dos outros exercícios (construtor/destrutor imprimindo mensagens).
- Para avaliar desempenho em listas grandes, gere números aleatórios e compare tempos.

## Explicação do exercício
- Objetivo: aplicar o algoritmo de ordenação **Merge-Insertion (Ford-Johnson)** a uma sequência de inteiros, medindo tempos em dois contêineres diferentes.
- Contêineres usados: `std::deque` (lista ligada com iteração aleatória limitada) e `std::vector` (contíguo em memória). A dupla permite comparar impacto de cache e custo de inserção no meio.

### Ford-Johnson (Merge-Insertion)
1. Agrupa os elementos em pares e, para cada par, separa o maior (vai para a lista “main”) do menor (vai para “pending”). Se houver elemento ímpar, fica pendente.
2. Ordena recursivamente a lista `main` (aplicando o mesmo procedimento).
3. Insere os elementos de `pending` em `main` **na ordem dada pela sequência de Jacobsthal** (1, 3, 5, 11, 21, ...), o que reduz o número de comparações. Cada inserção usa **busca binária** para achar a posição correta.
4. Ao final, insere eventuais elementos pendentes que não foram cobertos na sequência de Jacobsthal e, por último, o elemento ímpar (se existia).
5. O resultado substitui a faixa original (para deque e para vector), mantendo estabilidade do processo nessa implementação.

### Por que funciona e por que esses contêineres
- A sequência de Jacobsthal define uma ordem de inserção que minimiza comparações adicionais ao inserir os “menores” em uma lista já ordenada de “maiores”.
- `std::vector` tende a ser mais rápido em busca binária (dados contíguos, melhor cache), mas inserções deslocam elementos.
- `std::deque` evita realocações completas, mas tem menos localidade de cache; serve de contraste para medir impacto estrutural do contêiner.
