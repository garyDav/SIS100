Algoritmo ejer2
	i <- 0
	porcentaje <- 0
	numPersonas <- 0
	jovenes_solteras <- 0
	Repetir
		Escribir "Cantidad de Tarjetas: "
		Leer x
	Hasta Que x > 0
	
	Mientras i < x Hacer
		Escribir "Nœmero de censo: ",i+1
		Escribir "Sexo: "
		Leer sexo
		Escribir "Edad: "
		Leer edad
		Escribir "Estado civil: a b c d"
		Leer e_civil
		
		Si sexo = "femenino" y edad > 17 y edad < 23 Entonces
			jovenes_solteras <- jovenes_solteras + 1
		Fin Si

		numPersonas <- numPersonas + 1
		i <- i + 1
	Fin Mientras
	
	porcentaje <- (jovenes_solteras / numPersonas) * 100

	Escribir "La cantidad de J—venes Solteras es: ", trunc(porcentaje), "%"
FinAlgoritmo
