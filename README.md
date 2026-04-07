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

## Vista esquemática

<img width="1082" height="791" alt="controledeenchentevistaesquematica" src="https://github.com/user-attachments/assets/28bf48ef-eca2-42b2-9be7-bc15870a2062" />



## 🔗 Simulação
Você pode testar o projeto no Tinkercad através do link abaixo:
https://www.tinkercad.com/things/4Y7NTPPqwIP/editel?sharecode=E6sdJblrUjd_7hX5M4QGha4rf-ev4ygBzAggtMS9vUs

Nível (%),Estado,LED,Buzzer
0 - 50,Seguro,Verde (Pisca Lento),Desligado
51 - 70,Atenção,Amarelo (Pisca Médio),Desligado
71 - 90,Alerta,Vermelho (Pisca Rápido),Beep Intermitente
91 - 100,Crítico,Vermelho (Muito Rápido),Beep Rápido
---
Desenvolvido por Victor Nastri
