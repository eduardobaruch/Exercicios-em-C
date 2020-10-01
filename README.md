# Exercicios em C
 Lista de exercicios na linguagem C

A) Calculo do peso ideal de uma pessoa é dado por:
Para homens: (72.7 * altura) – 58
Para mulheres: (62.1 * altura) – 44.7

Fazer um algoritmo para ler o sexo e a a altura do usuário, e
apresentar o seu peso ideal. Mostrar mensagem de erro de a
informação fornecida estiver incorreta.

---

B) Escreva um programa em C para calcular o tempo necessário para fazer o percurso entre duas cidades. O usuário deve digitar:
A distância.
O meio de transporte utilizado:
  i. Ônibus:  70km/h
 ii. Celta:   100km/h
iii. X Terra: 140km/h

---

C) Escreva um programa para calcular uma expressão algébrica lido do teclado. As operações
 
 1. Escrever um programa em C que leia um vetor G(13) que é o gabarito de um
teste de loteria esportiva, contendo os valores 1 (coluna 1), 2 (coluna 2) e 3
(coluna do meio). Ler, a seguir, para 10 apostadores, o respectivo número de
seu cartão e um vetor Resposta R (13). Verificar para cada apostador o número
de acertos e escrever o número do apostador e seu número de acertos. Se tiver
13 acertos, acrescentar a mensagem: "GANHADOR, PARABENS".

---

2. Escreva um programa em C que lê uma matriz M(5,5) e calcule as somas:
a) da linha 4 de M;
b) da coluna 2 de M;
c) da diagonal principal;
d) da diagonal secundária;
e) de todos os elementos da matriz;
f) Escreva estas somas e a matriz

---

3. Faça um programa em C que leia o número de andares de um prédio e, a seguir,
para cada andar do prédio, leia o número de pessoas que entraram e saíram do
elevador. Considere que o elevador está vazio e está subindo, os dados se
referem a apenas uma “subida” do elevador e que o número de pessoas dentro
do elevador sempre será maior ou igual a 0.
Se o número de pessoas, após a entrada e saída for maior que 15, deve ser
mostrada a mensagem “EXCESSO DE PASSAGEIROS. DEVEM SAIR" em
seguida, o número de pessoas que devem sair do elevador, de modo que seja
obedecido o limite de 15 passageiros.
Após a entrada de pessoas no último andar o algoritmo deve mostrar quantas
pessoas irão descer.

---

4. Foi realizada uma pesquisa de algumas características físicas da população de
uma certa região, a qual coletaram os seguintes dados referentes a cada
habitante para serem analisados:

- sexo (masculino e feminino)
- cor dos olhos (azuis, verdes ou castanhos)
- cor dos cabelos (louros, castanhos, pretos)
- idade

Faça um programa em C que determine e escreva:
a) a maior idade dos habitantes;
b) a quantidade de indivíduos do sexo feminino cuja idade está entre 18 e 35
anos, inclusive;
c) a quantidade de indivíduos que tenham olhos verdes e cabelos louros;
O final do conjunto de habitantes é reconhecido pelo valor -1 informado como
idade.

---

5. Uma companhia resolveu cadastrar todos os funcionários em um Sistema
computacional. Você foi contratado para desenvolver o sistema em questão. Será
necessário armazenar os seguintes dados do funcionário:

codigo - Código do funcionário
nome - Nome do funcionário (com até 40 caracteres)
cargo - Cargo do funcionário (com até 20 caracteres)
salario - Valor do salário do funcionário
endereco - Endereço do funcionário (rua, número, cidade, estado, cep)
telefone - Telefone de contato do funcionário
status -“ ” (espaço em branco) -> indica funcionário ativo
“*” (asterisco) -> indica funcionário removido

O sistema deverá ter as opções para:
a- Inclusão de funcionários
b- Consulta de funcionários por nome ou código
c- Alteração nos dados do funcionário
d- Exclusão de funcionário
e- Relatório de funcionários

---

6. Faça um programa em C que leia um número e divida-o por dois
(sucessivamente) até que o resultado seja menor que 1. Mostre o resultado da
última divisão e a quantidade de divisões efetuadas.

---

7. Faça um programa em C que, para a progressão geométrica 3; 9; 27; 81; ...;
6561, determine a soma de seus termos. Construa o algoritmo de maneira a
não utilizar a fórmula de soma dos termos. Faça com que o computador gere
cada um dos termos a ser somado.

Ex.: 3; 9; 27; 81; 243; 729; 2187; 6561 => 9840

---

8. Sem utilizar a operação de multiplicação, escreva um programa que multiplique
dois números inteiros. Por exemplo: 2 * 2 = 2 + 2.

---

9. A série de Fibonacci é formada pela sequência:
0, 1, 1, 2, 3, 5, 8, 13, 21, ...

Faça um programa em C que gere e mostre a série até o vigésimo termo.

---

10. Escreva um programa em C que ofereça as opções para o usuário: (i) converter
uma cadeia de caracteres de letras maiúsculas em letras minúsculas, e (ii)
converter todos os caracteres para maiúscula.

Dica 1: Para converter uma cadeia de caracteres de letras maiúsculas em letras
minúsculas some 32 dos caracteres cujo código ASCII está entre 65 e 90.

Dica 2: Para converter todos os caracteres para maiúscula subtraia 32 dos
caracteres cujo codigo ASCII está entre 97 e 122.

---

11. Escreva um programa em C que recebe do usuário uma string S, um caractere
C, e uma posição I e devolve o índice da primeira posição da string onde foi
encontrado o caractere C. A procura deve começar a partir da posição I.

---

12. O codigo de César é uma das mais simples e conhecidas técnicas de
criptografia. É um tipo de substituição na qual cada letra do texto é substituída
por outra, que se apresenta no alfabeto abaixo dela um número fixo de vezes.
Por exemplo, com uma troca de três posições, ‘A’ seria substituído por ‘D’, ‘B’ se
tornaria ‘E’, e assim por diante.

Implemente um programa em C que faça uso desse Código de César (3
posições), entre com uma string e retorne a string codificada.

Exemplo:
String: a ligeira raposa marrom saltou sobre o cachorro cansado
Nova string: D OLJHLUD UDSRVD PDUURP VDOWRX VREUH R
FDFKRUUR FDQVDGR

---

13.Faça um programa que, dada uma string, diga se ela e um palíndromo ou
não. Lembrando que um palíndromo é uma palavra que tenha a
propriedade de poder ser lida tanto da direita para a esquerda como da
esquerda para a direita.

Exemplo: ovo
arara
Socorram-me, subi no ônibus em Marrocos. Anotaram a data
da maratona 

---

14.Construa um programa em C que leia duas strings fornecidas pelo usuário
e verifique se a segunda string lida está contida no final da primeira,
retornando o resultado da verificação.

---

15.Faça um programa que contenha um menu com as seguintes opções:

(a) Ler uma string S1 (tamanho maximo 20 caracteres);
(b) Imprimir o tamanho da string S1;
(c) Comparar a string S1 com uma nova string S2 fornecida pelo usuário
e imprimir o resultado da comparação;
(d) Concatenar a string S1 com uma nova string S2 e imprimir na tela o
resultado da concatenação;
(e) Imprimir a string S1 de forma reversa;
(f) Contar quantas vezes um dado caractere aparece na string S1. Esse
caractere desse ser informado pelo usuário;
(g) Substituir a primeira ocorrência do caractere C1 da string S1 pelo
caractere C2. Os caracteres C1 e C2 serão lidos pelo usuário;
(h) Verificar se uma string S2 é substring de S1. A string S2 deve ser
informada pelo usuário;
(i) Retornar uma substring da string S1. Para isso o usuário deve
informar a partir de qual posição deve ser criada a substring e qual é
o tamanho da substring.
