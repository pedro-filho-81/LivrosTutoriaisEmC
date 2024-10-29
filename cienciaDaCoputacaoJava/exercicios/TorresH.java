public class TorresH {

	public static void main(String[] args) {
	
        int p=3; // número de pratos
	
		moverpratos( p, 'A', 'B','C'); // A,B,C =nome das torres
	} // end Main

	public static void moverpratos(int p, char torreinicial, char destino,char torreintermediaria) {
    
        // se prato Maior ou igual a 1
        if (p >= 1) {
            System.out.printf("Move o prato %d da torre %c para a torre %c\n", p, torreinicial, destino);
    
            return;// só é executado quando apenas o ultimo prato esta na torre inicial e retorna pro main
        } else {
            moverpratos(p - 1, torreinicial, torreintermediaria, destino); //move da torre inicial para a torre intermediaria
            // se a torre intermediaria estiver ocupada com um prato menor ele move para a torre destino
        
            System.out.println("Move o prato " + p + " da torre " + torreinicial + " para a torre " + destino);
        
            moverpratos(p - 1, torreintermediaria, destino, torreinicial); 
            // move da torre intermediaria para a torre destino, se a torre destino estiver ocupada por um prato menor ele usa
            // a torre inicial como auxiliar 
        }
    }
}
