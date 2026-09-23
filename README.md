Desafio de Monitoramento de Temperatura

1- Identificação
Nome do aluno: Arthur Teodoro Severo Disciplina: Analise e desenvolvimeto de sistemas Professora: Profa. Karla Sartin Título do projeto: Sistema de Monitoramento de Temperatura

2- Objetivo
O objetivo deste projeto é desenvolver um programa em linguagem C para monitorar temperaturas informadas pelo usuário.

O programa recebe um limite de temperatura e, depois, realiza várias leituras. Quando uma temperatura fica acima do limite, ela é contabilizada. Se ocorrerem três temperaturas consecutivas acima do limite, o programa identifica a situação e encerra o monitoramento automaticamente.

O programa também possui validação para entradas inválidas, evitando que valores que não sejam números sejam utilizados nos cálculos.

3- Funcionamento do programa
Definição do limite

Primeiramente, o programa solicita ao usuário um valor que será utilizado como limite de temperatura.

O valor é armazenado na variável limite.

Caso o usuário digite uma entrada que não seja um número, o programa informa que a entrada é inválida e solicita novamente o valor.

Leitura das temperaturas

Depois de definir o limite, o programa entra no processo de monitoramento.

O usuário informa uma temperatura por vez. Cada temperatura é comparada com o limite definido anteriormente.

Tratamento de valores inválidos

O programa verifica o resultado do scanf().

Quando o valor digitado não é numérico, uma mensagem de erro é apresentada e a entrada inválida é removida do teclado. Depois disso, o programa continua solicitando uma nova temperatura.

Exemplo:

Digite a temperatura: abc Entrada invalida! Digite um numero. Digite a temperatura:

Identificação de temperaturas acima do limite

Quando a temperatura informada é maior que o limite, o programa aumenta a variável consecutivas.

Exemplo:

Limite: 30

Temperatura: 32 Temperatura acima do limite! Temperaturas consecutivas acima do limite: 1

Contagem de temperaturas consecutivas

A variável consecutivas guarda a quantidade de temperaturas acima do limite que ocorreram em sequência.

Se a temperatura estiver dentro do limite, a contagem volta para zero.

Exemplo:

32 -> acima do limite -> consecutivas = 1 33 -> acima do limite -> consecutivas = 2 29 -> dentro do limite -> consecutivas = 0 35 -> acima do limite -> consecutivas = 1

Isso significa que somente temperaturas acima do limite sem interrupção são consideradas consecutivas.

Encerramento automático

Quando a contagem chega a 3 temperaturas consecutivas acima do limite, o programa exibe um alerta e encerra automaticamente o monitoramento.

Exemplo:

Limite: 30

Temperatura: 31 Consecutivas: 1

Temperatura: 32 Consecutivas: 2

Temperatura: 35 Consecutivas: 3

ALERTA: 3 temperaturas consecutivas acima do limite. Monitoramento encerrado automaticamente.

4- Estruturas de repetição utilizadas
do...while

Foi utilizada a estrutura do...while para realizar o monitoramento.

Ela permite que o programa execute a leitura da temperatura pelo menos uma vez e continue repetindo enquanto a quantidade de temperaturas consecutivas acima do limite for menor que 3.

Trecho principal:

do { // leitura e análise da temperatura } while (consecutivas < 3);

Também foi utilizado do...while na validação do limite, garantindo que o usuário tenha a oportunidade de informar novamente o valor caso digite uma entrada inválida.

while

Foi utilizado while para limpar os caracteres restantes do teclado quando uma entrada inválida é encontrada:

while (getchar() != '\n') { /* Limpa a entrada invalida */ }

Essa estrutura evita que a entrada inválida fique armazenada e cause problemas na próxima leitura.

Justificativa

As estruturas de repetição foram utilizadas porque o programa precisa realizar várias leituras de temperatura até que uma condição específica seja alcançada.

O do...while é adequado para o monitoramento porque pelo menos uma leitura precisa ser realizada antes da verificação da condição de encerramento.

5- Como executar
Requisitos

É necessário ter um compilador de linguagem C instalado, como o GCC.

Compilação

No terminal, dentro da pasta do projeto, execute:

gcc monitoramento.c -o monitoramento

Execução no Linux ou macOS

./monitoramento

Execução no Windows

No Prompt de Comando ou PowerShell:

monitoramento.exe

6- Testes realizados
Foram realizados os três cenários solicitados no desafio.

Teste 1 — Validação de entrada inválida

Objetivo: verificar se o programa identifica uma entrada que não é numérica.

Exemplo:

Digite o limite de temperatura: 30

Digite a temperatura: abc Entrada invalida! Digite um numero.

Digite a temperatura: 29 Temperatura dentro do limite. Contagem de consecutivas zerada.

Resultado: o programa identificou a entrada inválida, exibiu uma mensagem e continuou funcionando normalmente.

Evidência: evidencias/teste01.png

Teste 2 — Temperaturas acima do limite, mas não consecutivas

Limite: 30

Entradas:

32 28 35 29 31

Resultado esperado:

32 -> acima do limite -> contagem 1 28 -> dentro do limite -> contagem 0 35 -> acima do limite -> contagem 1 29 -> dentro do limite -> contagem 0 31 -> acima do limite -> contagem 1

Como as temperaturas acima do limite não ocorreram três vezes seguidas, o programa não encerra automaticamente.

Evidência: evidencias/teste02.png

Teste 3 — Três temperaturas consecutivas acima do limite

Limite: 30

Entradas:

31 32 35

Resultado esperado:

31 -> acima do limite -> contagem 1 32 -> acima do limite -> contagem 2 35 -> acima do limite -> contagem 3

Ao chegar a três temperaturas consecutivas acima do limite, o programa apresenta o alerta e encerra automaticamente.

Evidência: evidencias/teste03.png

7- Estrutura do projeto
desafio-monitoramento/ │ ├── monitoramento.c ├── README.md │ └── evidencias/ ├── teste01.png ├── teste02.png └── teste03.png

8- Tecnologias utilizadas
Linguagem C

GCC (compilador)

GitHub para armazenamento e entrega do projeto

9- Conclusão
O projeto apresenta um sistema simples de monitoramento de temperatura utilizando estruturas de repetição em linguagem C.

O programa consegue receber temperaturas, comparar os valores com um limite, validar entradas inválidas, contar temperaturas acima do limite de forma consecutiva e encerrar automaticamente quando três ocorrências consecutivas são identificadas.

Questão final de reflexão

Escolhemos utilizar o while e o do...while porque eles facilitam a repetição das tarefas do programa. O do...while foi usado principalmente no monitoramento, pois precisamos realizar pelo menos uma leitura antes de verificar se o programa deve continuar.

A diferença entre a condição antes ou depois da execução foi importante porque, no nosso algoritmo, algumas verificações precisam acontecer depois que o usuário informa um valor. Dessa forma, conseguimos controlar corretamente a quantidade de temperaturas consecutivas acima do limite e encerrar o programa quando atingir 3 ocorrências.
