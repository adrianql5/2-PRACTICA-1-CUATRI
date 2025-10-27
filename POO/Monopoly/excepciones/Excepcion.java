// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

package excepciones;

public abstract class Excepcion extends Exception {
    protected Excepcion(String mensaje) {
        super("Excepcion " +mensaje);
    }
}
