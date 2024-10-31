# Projeto Semáforo

A proposta de construção de um semáforo iniciou-se com a compreensão dos detalhes necessários, como cores e fases. Assim, definiram-se os seguintes requisitos: 

- Montagem física de um semáforo utilizando LEDs e resistores em uma protoboard.
- Cores: vermelho, amarelo e verde.
- Tempos: 6 segundos para o vermelho, 2 segundos para o amarelo e 2 segundos para o verde.

Para a execução do projeto, foram selecionados os seguintes materiais:

<div align="center">
<sub>Componentes utilizados</sub><br>

| Componente      | Quantidade | Função                       |
|-----------------|------------|------------------------------|
| LED Verde       | 1          | Representa a luz verde       |
| LED Amarelo     | 1          | Representa a luz amarela     |
| LED Vermelho    | 1          | Representa a luz vermelha    |
| Resistor 330Ω   | 3          | Limita a corrente dos LEDs   |
| Buzzer          | 1          | Emite som durante as fases   |
| Protoboard      | 1          | Base para as conexões       |
| Fios Jumper     | 9          | Conexão dos componentes      |
| Arduino Uno     | 1          | Controle da lógica do sistema|

</div>

### Montagem

Utilizando um suporte semelhante a um semáforo, os LEDs foram posicionados adequadamente. Cada LED foi conectado ao respectivo pino digital do Arduino por meio de jumpers macho-fêmea, ligando o terminal positivo ao pino e o terminal negativo a um resistor. Os resistores foram conectados ao barramento negativo da protoboard.

O buzzer foi integrado da mesma maneira: seu terminal positivo foi ligado a um pino digital do Arduino e o terminal negativo ao barramento negativo da protoboard. Para completar o circuito, o barramento negativo da protoboard foi conectado ao pino GND do Arduino.

<div style="display: flex; justify-content: center; align-items: center; gap: 20px;">
  <div align="center">
    <sub>Conexões</sub><br>
    <img src="imagens/atraz_semaforo.jpg" width="300px"><br>
  </div>

  <div align="center">
    <sub>Resistores</sub><br>
    <img src="imagens/resistores.jpg" width="300px"><br>
  </div>

  <div align="center">
    <sub>Arduino</sub><br>
    <img src="imagens/arduino.jpg" width="300px"><br>
  </div>
</div>

Após concluir a montagem, desenvolvemos o código para o funcionamento do semáforo, disponível no arquivo de [código](code.ino).

Por fim, ao reunir todos os elementos, o semáforo final ficou assim. Para conferir o resultado em ação, acesse o [vídeo no Drive](https://drive.google.com/file/d/1j2t2KycGeuG-RnEFEKa5YajWcXOUnPUv/view?usp=sharing).

<div align="center">
<sub>Semáforo</sub><br>
<img src="imagens/frente_semaforo.jpg" width="50%"><br>
</div>

### Avaliação

Com o projeto finalizado, foi realizada uma avaliação entre pares. Eu fui responsável por avaliar o projeto da Thalyta da Silva Viana, e ela por avaliar o meu. A avaliação entre pares completa está disponível aqui: [avaliação](relatorio.md).

### Conclusão

A construção do semáforo com LEDs foi uma experiência enriquecedora, permitindo a aplicação prática de conceitos aprendidos em aula. A montagem e o desenvolvimento do código mostraram a importância da organização nas conexões e da lógica de controle de sinais. A avaliação entre pares proporcionou um aprendizado valioso, permitindo a troca de sugestões e a identificação de melhorias. Este projeto consolidou uma base sólida para futuros desenvolvimentos em eletrônica.