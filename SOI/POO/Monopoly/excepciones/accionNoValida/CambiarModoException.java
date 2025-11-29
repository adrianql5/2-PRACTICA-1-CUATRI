// Copyright (c) 2025 Adrián Quiroga Linares Lectura y referencia permitidas; reutilización y plagio prohibidos

package excepciones.accionNoValida;

public class CambiarModoException extends AccionNoValida {
    public CambiarModoException() {
        super("No se puede cambiar de modo una vez ya se ha tirado.");
    }
}
