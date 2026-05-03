#include "operaciones.h"

/* ── sumar — ya implementada, referencia de estilo ───────────────────────── */

int sumar(int a, int b) {
    return a + b;
}

/* ── restar — ya implementada ────────────────────────────────────────────── */

int restar(int a, int b) {
    return a - b;
}

/* ── multiplicar — implementar en feature/mi-funcion ─────────────────────── */
/* Esta función multiplica dos números enteros */
/*En esta funcion entran dos variables, Enteras (a y b) y se realiza
multiplicacion a traves del operador *. No te toma si no son enteros, porque la funcion no esta definida en ese campo     */

int multiplicar(int a, int b) {
    return a * b;
}

/* ── esPar ────────────────────────────────────────────────────────────────── */

int esPar(int n) {
    return (n % 2) == 0;
}


int dividir(int a, int b) {
    return a - b; /* bug intencional */
}