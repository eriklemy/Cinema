# Cinema
Venda de bilhetes

> Programação Imperativa  <br>
> Erick Lemmy dos Santos Oliveira 
  
### Exercicio 
Um cinema possui 140 lugares, 14 fileiras com 10 poltronas cada, numeradas de 1 a 140. Elabore um
programa de venda de bilhetes empregando uma matriz (14x10) como representação dos lugares da
plateia. Para cada entrada adquirida serão informados o número da poltrona (que será transformado
em [linha][coluna] para acesso à matriz) e o tipo do ingresso (uma letra, sendo ‘m’ – meia entrada ou ‘i’
– inteira).
O programa deverá contar com o seguinte menu de opções:

> 0 – sair <br>
> 1 – vender ingresso <br>
> 2 – mostrar plateia <br>
> 3 – mostrar ocupação

## Execução 
### Comprando Ingresso
<pre>
--- Cinema 'Ciber' ---
0 - Sair
1 - Vender Ingresso
2 - Mostrar Plateia
3 - Mostrar Ocupacao

Qual sua opcao? 1

--- Poltronas Disponiveis ---
        1       2       3       4       5       6       7       8       9       10
        11      12      13      14      15      16      17      18      19      20
        21      22      23      24      25      26      27      28      29      30
        31      32      33      34      35      36      37      38      39      40
        41      42      43      44      45      46      47      48      49      50
        51      52      53      54      55      56      57      58      59      60
        61      62      63      64      65      66      67      68      69      70 
        71      72      73      74      75      76      77      78      79      80
        81      82      83      84      85      86      87      88      89      90
        91      92      93      94      95      96      97      98      99      100
        101     102     103     104     105     106     107     108     109     110
        111     112     113     114     115     116     117     118     119     120
        121     122     123     124     125     126     127     128     129     130
        131     132     133     134     135     136     137     138     139     140 
Escolha uma poltrona <1..144>: 124
Qual o tipo do ingresso, sendo Meia('m') e Inteira('i'): m
</pre>

### Mostrando Plateia (Poltronas Vendidas)
<pre>
--- Cinema 'Ciber' ---
0 - Sair
1 - Vender Ingresso
2 - Mostrar Plateia
3 - Mostrar Ocupacao

Qual sua opcao? 2
        1       2       3       4       5       6       7       8       9       10 
        11      12      13      14      15      16      17      18      19      20
        21      22      23      24      25      26      27      28      29      30
        31      32      33      34      35      36      37      38      39      40
        41      42      43      44      45      46      47      48      49      50
        51      52      53      54      55      56      57      58      59      60
        61      62      63                              67      68      69      70 
        71      72      73      74      75      76      77      78      79      80
        81      82              84      85      86      87              89      90
        91      92      93      94      95      96      97      98      99      100
        101     102     103     104     105     106     107     108     109     110
        111     112     113     114     115     116     117     118     119     120
        121     122     123                     126     127     128     129     130 
        131     132     133     134     135     136     137                     140

</pre>

### Mostrando Ocupação 
![screenshot](https://cdn.discordapp.com/attachments/840637212126347264/899004411521695784/unknown.png)