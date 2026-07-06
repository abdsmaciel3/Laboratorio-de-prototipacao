# Módulo 1: Ambiente de Prototipagem 🛠️

Bem-vindo ao material de consulta do Módulo 1. Aqui você encontrará os conceitos básicos discutidos em aula, guias de configuração e os links para os projetos práticos que desenvolvemos.

---

## 💻 1. Ambiente de Desenvolvimento (IDE)

Para programar as placas de desenvolvimento (como Arduino, ESP32, etc.), utilizamos a **Arduino IDE**.

* **Download da IDE:** [Site Oficial do Arduino](https://www.arduino.cc/en/software)
* **Alternativa Web:** [Arduino Web Editor](https://create.arduino.cc/)
* **Guia Rápido:** Lembre-se de sempre verificar em `Ferramentas > Placa` e `Ferramentas > Porta` se o seu dispositivo está selecionado corretamente antes de enviar o código.

---

## ⚡ 2. Conceitos Básicos de Eletricidade e Eletrônica

Para criar circuitos em IoT, precisamos entender três grandezas fundamentais (Lei de Ohm):

| Grandeza | Unidade de Medida | O que faz? |
| :--- | :--- | :--- |
| **Tensão (V)** | Volts (V) | É a "força" que empurra os elétrons. |
| **Corrente (I)** | Ampères (A) | É o fluxo de elétrons passando pelo circuito. |
| **Resistência (R)** | Ohms ($\Omega$) | É a oposição ao fluxo de elétrons (protege os componentes). |

> ⚠️ **Regra de Ouro:** Nunca ligue um LED diretamente na energia sem um **resistor**, ou ele irá queimar!

---

## 🔌 3. Montagem de Circuitos Elétricos

Em nosso laboratório, utilizamos a **Protoboard (Matriz de Contatos)** para testar circuitos sem solda.

* **Linhas Laterais (+ e -):** Conectadas horizontalmente (geralmente usadas para Alimentação e GND).
* **Colunas Centrais (A, B, C...):** Conectadas verticalmente. Componentes em uma mesma coluna estão interligados.

---

## 📜 4. Programação: Estrutura Básica do Código

Todo código em C/C++ do Arduino possui duas funções obrigatórias:

```cpp
void setup() {
  // Executado apenas UMA VEZ quando a placa é ligada.
  // Configurações iniciais (definir se um pino é entrada ou saída).
  pinMode(13, OUTPUT); 
}

void loop() {
  // Executado REPETIDAMENTE e continuamente enquanto a placa estiver ligada.
  // Aqui fica a lógica principal do seu projeto.
  digitalWrite(13, HIGH); // Liga o pino 13
  delay(1000);            // Espera 1 segundo (1000 milissegundos)
  digitalWrite(13, LOW);  // Desliga o pino 13
  delay(1000);            // Espera 1 segundo
}
