# Módulo 2: Prototipação com Sensores e Atuadores 

Bem-vindo ao material de consulta do Módulo 2. Nesta etapa, aprenderemos como o Arduino interage com o mundo físico, recebendo informações e gerando ações.

---
## 1. Conceitos-Chave do Módulo

* **Leitura Analógica (`analogRead`):** Lê uma faixa contínua de valores baseada na variação de tensão. No Arduino Uno, essa leitura varia de **0** (0V, escuro total no LDR) a **1023** (5V, luz máxima).
* **Sensor Ultrassônico:** Mede a distância calculando o tempo que uma onda sonora leva para ir até um objeto e voltar (`pulseIn`).

---

## 2. Sensores vs. Atuadores

Para entender a eletrônica em IoT, pense no ecossistema do Arduino como o corpo humano:

* **Sensores (Entradas / Inputs):** São os "olhos e ouvidos" do projeto. Eles transformam estímulos do mundo físico (luz, distância, temperatura, toque) em sinais elétricos que o Arduino consegue ler.
  * *Exemplos:* LDR (Sensor de Luz), HC-SR04 (Sensor Ultrassônico), Sensor de Presença (PIR).
* **Atuadores (Saídas / Outputs):** São os "músculos" do projeto. Eles recebem ordens do Arduino e realizam uma ação física no ambiente (emitir som, acender luzes, girar motores).
  * *Exemplos:* LEDs, Buzzers, Motores de Passo, Servomotores.

---

## 3. Módulos e Shields: Facilitando as Conexões

Na bancada real, nem sempre ligamos os componentes puros ("pelados") na protoboard. Para facilitar o desenvolvimento e proteger os circuitos, usamos:

### Módulos
São pequenas placas de circuito impresso que já vêm com um componente soldado junto com seus resistores ou capacitores necessários. Eles reduzem a quantidade de fios na protoboard. 
* *Exemplo:* O seu mini laser de 2 fios é um componente puro; já o módulo laser KY-008 vem soldado em uma plaquinha com pinos de encaixe rápido.

### Shields (Escudos)
São placas maiores projetadas para serem encaixadas perfeitamente em cima do Arduino (como uma armadura). Eles expandem os pinos do Arduino de uma vez só ou adicionam funções inteiras sem precisar de uma protoboard.
* *Exemplo:* Motor Shield (para controlar vários motores robóticos) ou Ethernet Shield (para conectar o Arduino à internet via cabo).

---

## 4. Hands-on: Projetos Práticos

Abaixo estão os links para os circuitos simulados em aula. Acesse para clonar, testar e analisar a lógica dos códigos.

### 📌 Projeto 1: Alarme de Barreira Laser (Laser Tripwire)
* **Conceito:** O laser (Atuador) fica apontado para o LDR (Sensor). Se um intruso cortar o feixe, o valor de luz cai e o sistema aciona o Buzzer e o LED de alerta.
* **Link do Circuito no Tinkercad:** [🔗 Clique aqui para acessar o projeto](https://www.tinkercad.com/things/evifhdRcFBl-alarme-de-barreira-laser-laser-tripwire?sharecode=jhfkc7i6cNbMF2EJ2lFPNzfQsZ0FKU-XISgL9SsjtYs)

### 📌 Projeto 2: Sensor de Ré Inteligente
* **Conceito:** O Sensor Ultrassônico (Sensor) mede a distância de um obstáculo. Se o objeto chegar a menos de 100cm, o Buzzer (Atuador) começa a bipar de forma intermitente, acelerando o som conforme a proximidade.
* **Link do Circuito no Tinkercad:** [🔗 Clique aqui para acessar o projeto](https://www.tinkercad.com/things/dLJhNIvax75-sensor-de-re-?sharecode=IoAbnmTQDotmLXIUOjJaz8KFk_OnuLEcCE4Bp5Q99zY)

---

## 📚 Leituras Recomendadas
* [Como funciona o Sensor Ultrassônico HC-SR04](https://www.arduino.cc/reference/pt/)
* [Guia sobre Divisor de Tensão com LDR](https://www.tinkercad.com/)
