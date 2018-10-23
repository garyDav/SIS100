Algoritmo ejer_pi
	Repetir
		Escribir "Ingrese N: "
		Leer n
	Hasta Que n > 5
	i <- 1
	num <- 1
	den <- 1
	sum <- 0
	sig <- Verdadero
	contSig <- 0
	Repetir
		i <- i + 1
		Si sig Entonces
			Escribir "+", num, "/", den, "^", 2
		SiNo
			Escribir "-", num, "/", den, "^", 2
		Fin Si
		den <- den + 1

		contSig <- contSig + 1
		Si contSig = 2 Entonces
			sig <- no(sig)
			contSig <- 0
		Fin Si

	Hasta Que i > n
	
	Escribir "PI: ", sum
	
FinAlgoritmo
	