# ex00 — BitcoinExchange

Descrição
- Programa lê um ficheiro CSV `data.csv` com taxas de câmbio BTC por data.
- Recebe um ficheiro de input (`.txt`) com linhas `YYYY-MM-DD | value` ou `YYYY-MM-DD,value` e imprime o resultado da multiplicação pelo preço BTC mais próximo anterior.

Principais ficheiros
- BitcoinExchange.hpp — definição da classe que carrega a base de dados e processa o input.
- BitcoinExchange.cpp — implementação.
- main.cpp — carrega a base de dados e processa o ficheiro passado por argumento.
- data.csv — base de preços (já incluída no repositório).

Compilar
```bash
cd ex00
make
```

Uso
```bash
./btc input.txt
```
- `input.txt` deve ter linhas com `YYYY-MM-DD | value` (ou usa `,`).
- O programa valida formato de data e limites do `value`.

Exemplo
```bash
./btc input.txt
# saída: 2025-01-03 => 2 = 8000
```

Notas
- Mensagens de erro são impressas em `stdout`/`stderr` conforme implementado.
