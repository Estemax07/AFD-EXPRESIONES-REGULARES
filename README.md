# AFD - Expresiones Regulares

Implementación de un Autómata Finito Determinista (AFD) en **Python** y **C** que reconoce los siguientes tokens:

- `+`  → SUMA  
- `++` → INCR  
- `[A-Z][a-z0-9]*` → ID  

La entrada se lee desde `entrada.txt` y los tokens se imprimen por pantalla.  
Si un token no cumple la expresión regular, se muestra `NO ACEPTA`.

---

## Archivos del proyecto

- `afd.py` → Implementación en Python  
- `afd.c` → Implementación en C  
- `entrada.txt` → Archivo de prueba  

---

## Ejecución

### Python
```bash
python3 afd.py

### C
```bash
gcc afd.c -o afd
./afd
