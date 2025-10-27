// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

package excepciones.noExisteObjeto;

import excepciones.Excepcion;

// Subclase: NoExisteExcepcion
public class NoExisteObjetoException extends Excepcion {
    protected NoExisteObjetoException(String mensaje) {
        super("Tipo NoExiste:"+mensaje);
    }
}


