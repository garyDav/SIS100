Algoritmo ejer_pi
	Repetir
		Escribir "Ingrese N: "
		Leer n
	Hasta Que n > 5
	
	Repetir
		Escribir "Ingrese X: "
		Leer x
	Hasta Que x > 0
	
	i <- 1
	sum <- 0
	
	Repetir
		Escribir "+", "(x-", i, ")"
		sum <- sum + (x-i)
		i <- i + 1
	Hasta Que i > n

	Escribir "Suma: ", sum

FinAlgoritmo
