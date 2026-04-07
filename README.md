# 🌊 Monitor de Enchentes Inteligente

Projeto desenvolvido para o 1º semestre de faculdade para monitoramento de níveis de reservatórios e prevenção de enchentes.

## 🚀 Funcionalidades
- Medição de distância em tempo real via sensor HC-SR04.
- Conversão de distância para porcentagem de nível.
- Alertas visuais e sonoros por níveis de criticidade.

## 🛠️ Componentes Utilizados
- Arduino Uno
- Sensor Ultrassônico HC-SR04
- LEDs (Verde, Amarelo, Vermelho)
- Buzzer Ativo
- Resistores de 220Ω
- <img width="958" height="526" alt="controledeenchentetinkercad" src="https://github.com/user-attachments/assets/f413fcad-3b9b-44be-ac04-b54e64af5c5d" />


## 🔗 Simulação
Você pode testar o projeto no Tinkercad através do link abaixo:
https://www.tinkercad.com/things/4Y7NTPPqwIP/editel?sharecode=E6sdJblrUjd_7hX5M4QGha4rf-ev4ygBzAggtMS9vUs

Nível (%)/Estado/Sinalização Visual/Sinalização Sonora
0% a 50%/Seguro/LED Verde pisca (lento)/Silêncio
51% a 70%/Atenção/LED Amarelo pisca (médio)/Silêncio
71% a 90%/Alerta/LED Vermelho pisca (rápido)/Beep intermitente (médio)
91% a 100%/Crítico/LED Vermelho pisca (muito rápido)/Beep intermitente (rápido)
---
Desenvolvido por Victor Nastri
