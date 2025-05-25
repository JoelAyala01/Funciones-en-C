 /*
    Funcion: verificar_fila
    Objetivo: Recorrer la matriz fila por fila buscando numeros repetidos en la misma fila
    Retorna: falso o verdadero
    */
int verifica_fila(int n, int sudoku[n][n])
{
    for(int fila=0; fila<n; fila++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(sudoku[fila][i]==sudoku[fila][j])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}


/*
    Funcion: verificar_columna
    Objetivo: Recorrer la matriz columna por columna buscando numeros repetidos en la misma columna
    Retorna: falso o verdadero
    */
int verifica_columna(int n, int sudoku[n][n])
{
    for(int columna=0; columna<n; columna++)
    {
        for(int i=0; i<n; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                if(sudoku[i][columna]==sudoku[j][columna])
                {
                    return 1;
                }
            }
        }
    }
    return 0;
}
