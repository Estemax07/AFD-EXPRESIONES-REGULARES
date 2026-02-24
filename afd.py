def es_id(cadena):
    estado = 0

    for c in cadena:
        if estado == 0:
            if c.isupper():
                estado = 1
            else:
                return False
        elif estado == 1:
            if c.islower() or c.isdigit():
                estado = 1
            else:
                return False

    return estado == 1


def reconocer_token(token):
    if token == "++":
        return "INCR"
    elif token == "+":
        return "SUMA"
    elif es_id(token):
        return "ID"
    else:
        return "NO ACEPTA"


def main():
    try:
        with open("entrada.txt", "r") as archivo:
            contenido = archivo.read().split()

        for token in contenido:
            print(f"{token} -> {reconocer_token(token)}")

    except FileNotFoundError:
        print("No se encontró el archivo entrada.txt")


if __name__ == "__main__":
    main()
