# Gerenciamento de Fila de Contas Bancárias  

Este programa em C implementa uma estrutura de **fila dinâmica** para gerenciar contas bancárias. As contas são organizadas na forma de uma fila, respeitando a ordem de chegada (FIFO - First In, First Out).  

## 📋 Funcionalidades  

O programa oferece as seguintes operações:  

- **Zerar a fila**: Remove todas as contas da fila.  
- **Exibir a fila**: Lista todas as contas atualmente na fila, exibindo informações como número da conta, agência, saldo e tipo de conta.  
- **Inserir conta na fila (enqueue)**: Adiciona uma nova conta ao final da fila.  
- **Remover conta da fila (dequeue)**: Remove a conta que está no início da fila.  

## 🚀 Como Executar  

1. Certifique-se de ter um compilador C instalado, como o `gcc`.  
2. Copie o código para um arquivo chamado `fila_contas.c`.  
3. Compile o programa com o seguinte comando:  
   ```bash  
   gcc fila_contas.c -o fila_contas

Execute o programa:
./fila_contas  

## 🛠 Estrutura do Código  

- **Struct Conta**: Define os atributos de uma conta bancária, como número, agência, saldo e tipo (Corrente, Poupança ou Salário).  
- **Struct No**: Representa um nó na fila, contendo os dados da conta e um ponteiro para o próximo nó.  
- **Ponteiros `inicio` e `fim`**: Gerenciam o início e o fim da fila.  

## 📖 Fluxo do Programa  

1. O programa apresenta um menu de opções para o usuário interagir.  
2. Dependendo da escolha do usuário, a operação correspondente é executada:  
   - **Zerar a fila**: Limpa todas as contas.  
   - **Exibir a fila**: Mostra todas as contas cadastradas.  
   - **Inserir conta**: Adiciona uma nova conta ao final da fila.  
   - **Remover conta**: Retira a conta mais antiga (no início da fila).  
3. Ao sair, a memória alocada para a fila é liberada.  

## 📂 Exemplo de Uso  

### Entrada  
Escolha a opção:  
1. Zerar FILA  
2. Exibir FILA  
3. Enqueue - Inserir Conta  
4. Dequeue - Excluir conta  
Opção: 3  
Digite o número da conta: 12345  
Digite a agência: 6789  
Digite o saldo: 1000.50  
Digite o tipo da conta (Corrente/Poupanca/Salario): Corrente  

### Saída
Conta adicionada à fila!  

## Vizualizando a Fila
Escolha a opção:  
2  
Contas na fila:  
Número: 12345, Agência: 6789, Saldo: 1000.50, Tipo: Corrente  


