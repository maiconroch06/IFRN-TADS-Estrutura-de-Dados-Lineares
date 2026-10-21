/*

QUESTÃO 5:

Aplicação de Pilha (Stack) na Validação de Sintaxe de Expressões 

Em compiladores, interpretadores de linguagens de programação e calculadoras científicas, é essencial verificar 
se os delimitadores de uma expressão matemática ou bloco de código, como:

parênteses (), colchetes [] e chaves {} — estão corretamente balanceados e aninhados. 

Uma expressão é considerada válida se: 

1. Todo delimitador de abertura tem um delimitador de fechamento correspondente do mesmo tipo. 

2. Os delimitadores são fechados na ordem exata e inversa em que foram abertos (propriedade LIFO — Last 
In, First Out). 

Exemplos: 

• "{[()()]}" → Válida 
• "{[(])}" → Inválida (ordem de fechamento incorreta) 
• "((()" → Inválida (delimitador de abertura não fechado) 

Funções Auxiliares e Operações de Pilha Disponíveis: 
Para manipular a sequência de entrada, assuma que você possui a seguinte função genérica: 

• obterProximoCaractere(expressao): Lê e retorna o próximo caractere da expressao a cada chamada. 

Retorna o caractere especial FIM quando não houver mais caracteres a serem lidos. 
Para manipular a pilha de suporte, você tem à disposição as seguintes operações da estrutura Pilha de Caracteres: 

    • P.push(c): Insere o caractere c no topo da pilha 𝑃. 
    • P.pop(): Remove e retorna o caractere do topo da pilha 𝑃. 
    • P.top(): Retorna o caractere do topo da pilha sem removê-lo. 
    • P.isEmpty(): Retorna verdadeiro se a pilha estiver vazia ou falso caso contrário. 

Sua tarefa: 

Elabore um pseudocódigo da função verificarBalanceamento(expressao) que recebe uma expressao e, utilizando 
a função obterProximoCaractere e as operações de pilha descritas acima, retorne verdadeiro caso a expressão 
esteja com os delimitadores balanceados e falso caso contrário. 
5

*/