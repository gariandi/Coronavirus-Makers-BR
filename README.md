# Covid-19---respirador
Código para um possível respirador mecânico controlado por arduino.

Começamos este projeto com um código para um motor atuador com input de frequencia de trabalho pré-definida , modulando meia senóide para fazer a inspiração.
Os próximos passos serão calibrar um sensor de pressão, medir o volume deslocado num ciclo por um motor e pás definidas, tentar integrar essas informações em um novo código.

Criamos uma segunda versão para controle de uma linha de ar hospitalar, com base no projeto apresentado no vídeo do canal Clube do Técnico:

https://www.youtube.com/watch?v=NNr36bboLXE

Para melhoria destas últimas versões pretendemos fazer um controle por bluetooth, para ajustar o input do aparelho.
A saída digital do arduíno precisa ser amplificada para o acionamento das eletroválvulas. As opções são usos de shields do próprio arduíno, reles ou transistores. No último caso é importante pensar em colocar elementos redundantes em paralelo para diminuir o risco de falhas. Possivelmente também seria interessante agregar um display LCD.

Em todo caso, os requisitos médicos devem ser observados para um projeto final seguro.

