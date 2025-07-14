#### Air Linguagem de programação:



##### Sobre:

* Alterna entre compilada e interpretada com o seguinte código:

&nbsp;.define\_runType = .PresetEnums.Interpreted ou .PresetEnums.RunTypes.Compiled

&nbsp;Análise:
  ".": O ponto é usado para separar objetos de uma hierarquia; O ponto no início é usado para se referir ao próprio arquivo '.air';

&nbsp; ".define\_runType": 'define\_runType' É uma propriedade do próprio código que define o jeito de executar entre compilado e interpretado;

&nbsp; ".PresetEnums": É uma outra propriedade do código onde existe uma lista de *Enums* pré-definidos que definem outras propriedades do código;

&nbsp; "RunTypes": É um *Enum* que tem duas propriedades, sendo '.Compiled' e '.Interpreted' que definem se o código será compilado(.Compiled) ou interpretado(.Interpreted)

* Tem funções simples;

&nbsp;Exemplo:
  escrever no terminal em:

&nbsp;  Java:

&nbsp;   System.out.print("Hello world!");

&nbsp;  Python:

&nbsp;   print("Hello world!")

&nbsp;  Air:

&nbsp;   print "Hello world!"



##### Exemplo de código de calculadora:

&nbsp;	.define\_runType = PresetEnums.RunTypes.Compiled.MCExe // Compila o código como 'machine code exe' ou '.exe'

&nbsp;	

&nbsp;	function onStart // Declara uma função chamada 'onStart'

&nbsp;		var valor1, valor2, op // declara variáveis para os valores e a operação

&nbsp;		var result // declara a variável do resultado

&nbsp;		print "Calculadora\\n"

&nbsp;		print "Digite um cálculo\\n>"

&nbsp;		requestInput valor1, op, valor2 // requere que uma entrada de texto como o teclado seja usada para um 'scanf()' em C

&nbsp;		result = call 'calculate': valor1, op, valor2

&nbsp;		print "o resultado é ", result // concatena a string com o 'result'

&nbsp;	; // Fecha a função como o '}' em C ou 'end' em Lua



&nbsp;	function calculate; valor1, op, valor2 // declara uma função com parâmetros 'valor1','op' e 'valor2'

&nbsp;		switch op

&nbsp;			case '+':

&nbsp;				return valor1 + valor2

&nbsp;			case '-':

&nbsp;				return valor1 - valor2

&nbsp;			case 'x':

&nbsp;				return valor1 \* valor2

&nbsp;			case '/':

&nbsp;				return valor1 / valor2

&nbsp;		; // fecha o switch case

&nbsp;	;



&nbsp;	.run:call 'onStart' // Conecta a função global 'run' (que ativa assim que o código é executado) a função 'onStart'



##### Sintaxe:

Estrutura condicional If e Else:

&nbsp;	if variavel1 == valor1 then

&nbsp;		instruções

&nbsp;	else

&nbsp;		outras instruções

&nbsp;	;

Estrutura condicional Switch case e default:

&nbsp;	switch variavel1

&nbsp;		case valor1:

&nbsp;			instruções

&nbsp;		case valor2:

&nbsp;			outras instruções

&nbsp;		default:

&nbsp;			instruções aqui

&nbsp;	;

Operadores relacionais:

&nbsp;	== Igual a;

&nbsp;	< Menor que;

&nbsp;	> Maior que;

&nbsp;	<= Maior ou igual a;

&nbsp;	>= Menor ou igual a;

&nbsp;	!= Diferente de;

Operadores lógicos:

&nbsp;	and E

&nbsp;	or Ou

&nbsp;	not Senão

Estrutura de loop for:

&nbsp;	for var i = 0, valorMaximo, 1 do

&nbsp;		instruções

&nbsp;	;

Estrutura de loop while:

&nbsp;	while condição do

&nbsp;		instruções

&nbsp;	;



### **Esta linguagem não existe(ainda) pois está em desenvolvimento**

### **Uma grande parte do código escrito aqui não funciona**

