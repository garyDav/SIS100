Algoritmo Ejer4
	
	dig <- 0

	Repetir
		Escribir "Introduzca N: "
		Leer n
	Hasta Que n > 0

	m1 <- n
	m2 <- n
	s <- 0
	
	Escribir "S = "
	Mientras trunc(m1) <> 0 Hacer
		dig <- m1 % 10
		m2 <- trunc(m1 / 10)
		pot <- m2 % 10
		
		Escribir dig, "^", pot
		s <- s + (dig ^ pot)
		
		m1 <- trunc(m1 / 10)
	Fin Mientras
	
	Escribir "Suma = ", s - 1
FinAlgoritmo
