# Módulo 3: Desenvolvimento de Projetos 

Bem-vindo ao último módulo da nossa Trilha de IoT! Este dia é dedicado à consolidação do conhecimento através do desenvolvimento de projetos práticos e integrados, simulando cenários do mundo real.

---

## Projetos do Dia

---

### Projeto 1: GP Semáforo
Um projeto focado em lógica de repetição (`for`) e controle de fluxo, criando uma sequência dinâmica de LEDs interativa através de um botão.

* **Autor:** Cleto Leal
* **Componentes:** Arduino Uno, 5 LEDs Verdes, 1 LED Vermelho, Resistores e 1 Botão.
* **Links Úteis:**
  * [Simulação no Tinkercad](https://www.tinkercad.com/things/5XdpF2UbbsX-semaforo-gp?sharecode=UWJycDjOyLUspcQjCFAVvNE8P6mk2izKrT502Ad8yRw)
  * [Código-Fonte Completo](./projeto-1-gp-semaforo/gp_semaforo.ino)

---

### Projeto 2: Semáforo Avançado (Evolução Incremental)
Este projeto simula o desenvolvimento real de um produto de engenharia. Começamos com um circuito simples e adicionamos camadas de complexidade (recursos e acessibilidade) passo a passo.

#### Roteiro de Implementação:

| Passo | O que foi implementado? | Código de Referência |
| :--- | :--- | :--- |
| **Passo 1** | **Semáforo Simples:** Lógica básica de tempo para os carros (Verde, Amarelo, Vermelho). | [Acessar Código](./projeto-2-semaforo-avancado/passo_1_simples.ino) |
| **Passo 2** | **Sinal de Pedestre com Botão:** Adicionados LEDs para pedestres. O sinal dos carros só fecha se o pedestre apertar o botão. | [Acessar Código](./projeto-2-semaforo-avancado/passo_2_pedestre.ino) |
| **Passo 3** | **Acessibilidade Sonora:** Inclusão de um Buzzer. Emite bipes lentos quando o sinal de pedestre vai fechar e bipes rápidos quando está seguro para atravessar. | [Acessar Código](./projeto-2-semaforo-avancado/passo_3_acessibilidade.ino) |
| **Passo 4** | **Cancela Física (Servo Motor):** Automação física instalada. Um servo motor fecha uma barreira se o sinal do carro estiver vermelho e abre quando fica verde. | [Acessar Código](./projeto-2-semaforo-avancado/passo_4_completo_cancela.ino) |

* **Links Úteis:**
  * [ Simulação do Projeto Completo (Passo 4) no Tinkercad](https://www.tinkercad.com/things/7bBaJjoEcdS-passo-4-implementar-com-uma-cancela?sharecode=JDRIvWBEGTiGfpMWl6COT9p7MS3gzHcICLb1vvD7kPg)

---

## 🏆 Parabéns!
Você concluiu a Trilha de IoT e Laboratório de Prototipação. Agora você domina os conceitos básicos de eletrônica, leitura de sensores, atuação física e lógica de programação para criar seus próprios dispositivos conectados!
