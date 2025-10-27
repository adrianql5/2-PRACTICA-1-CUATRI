// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

package excepciones.accionNoValida;

import excepciones.Excepcion;

// Subclase: ComandoImposibleExcepcion
public abstract class AccionNoValida extends Excepcion {
    protected AccionNoValida(String mensaje) {
        super("No es posible usar:"+ mensaje);
    }
}
