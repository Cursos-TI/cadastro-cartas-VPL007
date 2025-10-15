# Desafio Super Trunfo - Países - Cadastro das Cartas 

Bem-vindo ao desafio "Super Trunfo - Países"! No jogo Super Trunfo, os jogadores comparam as propriedades das cartas para determinar a mais forte. O tema deste Super Trunfo é "Países," onde você comparará as propriedades das cidades.

A empresa MateCheck contratou você para desenvolver a parte inicial do jogo, que consiste no cadastro das cartas.

O desafio está dividido em três níveis: Novato, Aventureiro e Mestre, com cada nível adicionando mais complexidade ao anterior. Você deve escolher qual desafio quer realizar.

### 🚨 Atenção: 
O nível Novato do desafio é focado apenas no cadastro das cartas, utilizando as funções `scanf` </mark> para ler os dados e `printf` para exibi-los.

## 🎮 Nível Novato

No nível Novato, você iniciará criando o sistema básico do jogo Super Trunfo com o tema "Países". Os países estarão dividos por estados, cada um com quatro cidades. Vamos escolher 8 estados e nomeá-los com letras de A até H, e cada uma das 4 cidades escolhidas recebrão um código que levará a letra referente ao estado e o número referente a cidade (Ex: `A01`, `B02`, `C03`, até `H04`). 

### 🚩 Objetivo:
- Criar um programa que cadastre e exiba cartas representando cidades, contendo as seguintes propriedades:
  - **População (`int`)**
  - **Área (`float`)**
  - **PIB (`float`)**
  - **Número de pontos turísticos(`int`)**
  
### ⚙️ Funcionalidades do Sistema:
- O sistema permitirá ao usuário cadastrar cartas de cidades, inserindo manualmente os dados via terminal de comando.
- Após o cadastro, o sistema exibirá os dados de cada cidade de forma clara e organizada.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere os dados de cada carta interativamente, que serão lidas pelo programa (via `scanf`).
- Após o cadastro, os dados são exibidos (através da função `printf`) com todas as propriedades da cidade, uma por linha.

Obs: Para facilitar o processo para o nível Novato, cadastre apenas duas cartas, foque apenas na leitura, armazenamento e exibição dos dados,  usando somente as funções `printf` e `scanf`.

---

## 🛡️ Nível Aventureiro

No nível Aventureiro, você expandirá o sistema para incluir propriedades calculadas, permitindo uma análise mais detalhada das cartas.

### 🆕 Diferença em relação ao Nível Novato:
- **Novas Propriedades Calculadas:**
  - **Densidade Populacional:** População/Área da cidade (`float`).
  - **PIB per Capita:** PIB/População (`float`).
 
Obs: Lembre-se de trabalhar com as casas decimais proporcionais a sua "unidade de medida".

### ⚙️ Funcionalidades do Sistema:
- O sistema agora calculará automaticamente a Densidade Populacional e o PIB per Capita com base nos dados inseridos.
- Essas novas propriedades serão adicionadas às informações exibidas para cada cidade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário continua inserindo os dados de cada carta interativamente.
- O sistema exibirá os dados, incluindo as novas propriedades calculadas, de forma clara e organizada.

---

## 🏆 Nível Mestre

No nível Mestre, você implementará comparações entre as cartas, utilizando operadores relacionais e manipulando grandes números com precisão, e a criação docálculo para a inserção do dado "Super Poder" para cada carta.

### 🆕 Diferença em relação ao Nível Aventureiro:
- **Comparação de Cartas:**
  - O sistema permitirá ao usuário comparar duas cartas com base nas propriedades inseridas e calculadas.
  - Cada carta terá um "Super Poder"(`float`), que é a soma de todas as propriedades.

Obs: o Super Poder é a soma de todos os atributos (incluindo os calculados) com a densidade populacional `invertida`(Área/População, ao invés de População/Área);
Obs2: Lembre-se de trazer as unidades de medida para a mesma grandeza, para facilitar o cálculo;
Obs3: O inverso da densidade será um número muito baixo, por mera questão estética, sugiro multiplicar esse valor por 1000 (`inverso_densidade_1 * 1000`).
  
### ⚙️ Funcionalidades do Sistema:
- O sistema utilizará operadores relacionais para determinar a carta vencedora com base nas propriedades comparadas.
- A comparação considerará:
  - **Densidade Populacional:** Vence a carta com menor valor.
  - **Outras Propriedades:** Vence a carta com maior valor.
- O resultado das comparações será exibido claramente para cada propriedade.

### 📥 Entrada e 📤 Saída de Dados:
- O usuário insere as cartas a serem comparadas.
- O sistema exibe os resultados das comparações, indicando a carta vencedora para cada propriedade.

---

Ao concluir todos os níveis, você terá criado um sistema incial para o jogo Super Trunfo, com funcionalidades de cadastro, cálculo e comparação de propriedades. 

Boa sorte e divirta-se programando!

Equipe de Ensino - MateCheck
