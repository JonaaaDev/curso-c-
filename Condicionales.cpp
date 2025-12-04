// Sentencia if
int numero = 10;

if (numero > 0) {
    // El número es positivo
    int resultadoIf = 1;
}

// Sentencia if-else
int edad = 18;

if (edad >= 18) {
    // Es mayor de edad
    bool esMayorEdad = true;
} else {
    // Es menor de edad
    bool esMenorEdad = true;
}

// Sentencia if-else if-else
int puntuacion = 75;

if (puntuacion >= 90) {
    // Calificación A
    char calificacion = 'A';
} else if (puntuacion >= 80) {
    // Calificación B
    char calificacion = 'B';
} else if (puntuacion >= 70) {
    // Calificación C
    char calificacion = 'C';
} else {
    // Calificación D o inferior
    char calificacion = 'D';
}

// if anidados
int x = 10;
int y = 5;

if (x > 5) {
    if (y > 2) {
        // x es mayor que 5 Y y es mayor que 2
        bool ambosTrue = true;
    }
}
