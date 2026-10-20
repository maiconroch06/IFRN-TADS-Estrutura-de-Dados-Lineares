/*
QUESTÃO 2:

Integração de Estruturas de Dados Lineares em um Sistema de Navegação Web 
Em um navegador web moderno, o gerenciamento da navegação de abas e do histórico de
páginas exige a combinação de diferentes estruturas de dados lineares para garantir
operações eficientes.

Considere duas funcionalidades essenciais: 

1. Histórico de Navegação de uma Aba (Botões Voltar e Avançar): O usuário navega por novas páginas,
pode clicar em "Voltar" para retornar à página anterior e em "Avançar" para ir para uma página desfeita.
No entanto, se o usuário estiver em uma página anterior e acessar uma nova URL, todo o histórico de páginas 
do botão "Avançar" deve ser descartado.

2. Fila de Download do Navegador (Gerenciamento de Requisições): Os arquivos solicitados pelo usuário 
para download entram em uma fila e devem ser processados estritamente na ordem em que foram solicitados
(primeiro a entrar, primeiro a sair). 

Sua tarefa: 

1. Escolha e Justificativa das Estruturas: 

- Quais são as duas estruturas de dados lineares mais adequadas para resolver, respectivamente, 

(a) o Histórico de Navegação (Voltar/Avançar)   -> Duas Pilhas
(b) a Fila de Download?                         -> Fila

- Justifique tecnicamente a escolha de cada uma com base nas propriedades de acesso aos dados 
(LIFO, FIFO, etc.) e na complexidade temporal das operações (𝑂(1)). 

(a) o Histórico de Navegação (Voltar/Avançar)
        O site anterior ficará salvo em uma pilha de sites que foram visitados. A cada novo site visitado,
        o anterior ficará empilhado sobre todos os outros que já foram visitados. Ao acessar a opção 'Voltar'
        o site atual irá para uma outra pilha e o site anterior será removido da pilha de 'Voltar' e a pagina
        será aberta. Caso o usuario tenha voltado algumas paginas e ter acessado a uma nova pagina, a pilha
        dos sites da pilha 'Avançar' serão excluídos. Na pilha a prioridade de acesso aos dados se define como
        First-In and First-Out (FIFO).

(b) a Fila de Download?
        Para manter uma fila de download é utilizada obviamente uma fila, mais especificamente uma encadeada.
        Pois, lidar com uma fila encadeada se torna menos custoso para remover, além de não necessitar de fazer
        a realocação dinamica toda vez que inserir caso a fila fique cheia. Na fila a prioridade de acesso aos
        dados se define como Last-In and First-Out (LIFO).

*/